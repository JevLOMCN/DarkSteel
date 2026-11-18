// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 40

// SetClickEmoticon_WrapperImpl @ 14b610a80

void __cdecl UDS_VM_Chat_Functions::SetClickEmoticon_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChatEvent *pUVar1;
  
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
              (&pUVar1->OnChatPopup,Chat_EmotePopup,true);
    return;
  }
  return;
}

// SetClickChatMacro_WrapperImpl @ 14b610a90

void __cdecl UDS_VM_Chat_Functions::SetClickChatMacro_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChatEvent *pUVar1;
  
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
              (&pUVar1->OnChatPopup,Chat_Macro,true);
    return;
  }
  return;
}

// SetClickNormalMode_WrapperImpl @ 14b610aa0

void __cdecl UDS_VM_Chat_Functions::SetClickNormalMode_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChatEvent *pUVar1;
  
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast(&pUVar1->OnChangedChatMode,Normal);
    return;
  }
  return;
}

// SetClickLocationInfo_WrapperImpl @ 14b610ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_Functions::SetClickLocationInfo_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  FString FStack_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_ChattingManager::GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_Chat_Functions::OnClickLocationInfo",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x4f,L"chattingManager == nullptr");
    FStack_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)TStack_138._padding_;
  }
  else {
    ::FString::FString(&FStack_148,L"");
    UDS_ChattingManager::SendLocationInfoLink(this,&FStack_148);
  }
  if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
  }
  return;
}

// SetClickCreateGroup_WrapperImpl @ 14b610ac0

void __cdecl UDS_VM_Chat_Functions::SetClickCreateGroup_WrapperImpl(void *param_1,void *param_2)

{
  FString FStack_18;
  
  FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_18.Data.ArrayNum = 0;
  FStack_18.Data.ArrayMax = 0;
  UDS_ChatUIPopupHelper::OpenGroupSettingPopup(&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetClickCreateCustom_WrapperImpl @ 14b610ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_Functions::SetClickCreateCustom_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this = UDS_ChattingManager::GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_Functions::OnClickCreateCustom",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x60,L"chattingManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    iVar1 = UDS_ChattingManager::GetEmptyCustomDataIndex(this);
    if (iVar1 == -1) {
      TStack_158._0_8_ = 0;
      TStack_158._8_8_ = 0;
      TStack_158._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0xc54b,Complete_None_01,&TStack_158);
      return;
    }
    UDS_ChatUIPopupHelper::OpenCustomSettingPopup(iVar1);
  }
  return;
}

// SetClickOption_WrapperImpl @ 14b610ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_Functions::SetClickOption_WrapperImpl(void *param_1,void *param_2)

{
  UDS_LogManager *pUVar1;
  UDS_ContentManager *this;
  undefined1 auStackY_178 [32];
  EDS_ContentsTabFrameType aEStack_148 [2];
  undefined8 uStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_Chat_Functions::OnClickOption",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,TStack_138.Ptr,0x70,L"[Chat] OnClickOption()");
    if ((void *)TStack_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_138._padding_);
    }
  }
  this = UDS_ContentManager::GetInst();
  if (this == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_Functions::OnClickOption",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x75,L"contentManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    uStack_140 = 0;
    aEStack_148[0] = GameOptionChatting;
    UDS_ContentManager::OpenContent(this,aEStack_148,(TObjectPtr<UDS_ContentArguments>)&uStack_140);
  }
  return;
}

// SetEmoticonVisibility_WrapperImpl @ 14b610af0

void __cdecl UDS_VM_Chat_Functions::SetEmoticonVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetEmoticonVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetChatMacroVisibility_WrapperImpl @ 14b610b00

void __cdecl UDS_VM_Chat_Functions::SetChatMacroVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetChatMacroVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetNormalModeVisibility_WrapperImpl @ 14b610b10

void __cdecl UDS_VM_Chat_Functions::SetNormalModeVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetNormalModeVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetLocationInfoVisibility_WrapperImpl @ 14b610b20

void __cdecl
UDS_VM_Chat_Functions::SetLocationInfoVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetLocationInfoVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetCreateGroupVisibility_WrapperImpl @ 14b610b30

void __cdecl
UDS_VM_Chat_Functions::SetCreateGroupVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetCreateGroupVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetCreateCustomVisibility_WrapperImpl @ 14b610b40

void __cdecl
UDS_VM_Chat_Functions::SetCreateCustomVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetCreateCustomVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetOptionVisibility_WrapperImpl @ 14b610b50

void __cdecl UDS_VM_Chat_Functions::SetOptionVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetOptionVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// StaticClass @ 14b610b60

UClass * __cdecl UDS_VM_Chat_Functions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_Functions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_Functions",
               &Z_Registration_Info_UClass_UDS_VM_Chat_Functions.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_Functions,0x6d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_Functions>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_Functions>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_Functions.InnerSingleton;
}

// UDS_VM_Chat_Functions @ 14b613c40

UDS_VM_Chat_Functions * __thiscall
UDS_VM_Chat_Functions::UDS_VM_Chat_Functions(UDS_VM_Chat_Functions *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Functions__6B_;
  *(undefined8 *)&(this->ClickEmoticon).Delegate = 0;
  *(undefined8 *)&(this->ClickEmoticon).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEmoticon).Delegate.field_0x10 = 0;
  (this->ClickChatMacro)._padding_ = '\0';
  (this->ClickChatMacro).bIsCustomSelected = false;
  (this->ClickChatMacro).bIsLacked = false;
  (this->ClickChatMacro).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChatMacro).Delegate = 0;
  *(undefined8 *)&(this->ClickChatMacro).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatMacro).Delegate.field_0x10 = 0;
  (this->ClickNormalMode)._padding_ = '\0';
  (this->ClickNormalMode).bIsCustomSelected = false;
  (this->ClickNormalMode).bIsLacked = false;
  (this->ClickNormalMode).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickNormalMode).Delegate = 0;
  *(undefined8 *)&(this->ClickNormalMode).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickNormalMode).Delegate.field_0x10 = 0;
  (this->ClickLocationInfo)._padding_ = '\0';
  (this->ClickLocationInfo).bIsCustomSelected = false;
  (this->ClickLocationInfo).bIsLacked = false;
  (this->ClickLocationInfo).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickLocationInfo).Delegate = 0;
  *(undefined8 *)&(this->ClickLocationInfo).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickLocationInfo).Delegate.field_0x10 = 0;
  (this->ClickCreateGroup)._padding_ = '\0';
  (this->ClickCreateGroup).bIsCustomSelected = false;
  (this->ClickCreateGroup).bIsLacked = false;
  (this->ClickCreateGroup).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCreateGroup).Delegate = 0;
  *(undefined8 *)&(this->ClickCreateGroup).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCreateGroup).Delegate.field_0x10 = 0;
  (this->ClickCreateCustom)._padding_ = '\0';
  (this->ClickCreateCustom).bIsCustomSelected = false;
  (this->ClickCreateCustom).bIsLacked = false;
  (this->ClickCreateCustom).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCreateCustom).Delegate = 0;
  *(undefined8 *)&(this->ClickCreateCustom).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCreateCustom).Delegate.field_0x10 = 0;
  (this->ClickOption)._padding_ = '\0';
  (this->ClickOption).bIsCustomSelected = false;
  (this->ClickOption).bIsLacked = false;
  (this->ClickOption).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickOption).Delegate = 0;
  *(undefined8 *)&(this->ClickOption).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOption).Delegate.field_0x10 = 0;
  (this->TooltipTextEmoticon).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextEmoticon).StringEnumTableNameID.Number = 0;
  (this->TooltipTextEmoticon).DateTime.Ticks = 0;
  (this->TooltipTextEmoticon).TimeSpan.Ticks = 0;
  (this->TooltipTextEmoticon).TimeExpressionType = None;
  (this->TooltipTextEmoticon).IsExpression = false;
  (this->TooltipTextEmoticon).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextEmoticon).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextEmoticon).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextEmoticon).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextEmoticon).FormatArgs.ArrayNum = 0;
  (this->TooltipTextEmoticon).FormatArgs.ArrayMax = 0;
  (this->TooltipTextMacro).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextMacro).StringEnumTableNameID.Number = 0;
  (this->TooltipTextMacro).DateTime.Ticks = 0;
  (this->TooltipTextMacro).TimeSpan.Ticks = 0;
  (this->TooltipTextMacro).TimeExpressionType = None;
  (this->TooltipTextMacro).IsExpression = false;
  (this->TooltipTextMacro).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TooltipTextMacro).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextMacro).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextMacro).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextMacro).FormatArgs.ArrayNum = 0;
  (this->TooltipTextMacro).FormatArgs.ArrayMax = 0;
  (this->TooltipTextExpand).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextExpand).StringEnumTableNameID.Number = 0;
  (this->TooltipTextExpand).DateTime.Ticks = 0;
  (this->TooltipTextExpand).TimeSpan.Ticks = 0;
  (this->TooltipTextExpand).TimeExpressionType = None;
  (this->TooltipTextExpand).IsExpression = false;
  (this->TooltipTextExpand).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextExpand).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextExpand).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextExpand).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextExpand).FormatArgs.ArrayNum = 0;
  (this->TooltipTextExpand).FormatArgs.ArrayMax = 0;
  (this->TooltipTextCollapse).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextCollapse).StringEnumTableNameID.Number = 0;
  (this->TooltipTextCollapse).DateTime.Ticks = 0;
  (this->TooltipTextCollapse).TimeSpan.Ticks = 0;
  (this->TooltipTextCollapse).TimeExpressionType = None;
  (this->TooltipTextCollapse).IsExpression = false;
  (this->TooltipTextCollapse).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextCollapse).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextCollapse).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextCollapse).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextCollapse).FormatArgs.ArrayNum = 0;
  (this->TooltipTextCollapse).FormatArgs.ArrayMax = 0;
  (this->ClickEmoticon)._padding_ = '\0';
  (this->ClickEmoticon).bIsCustomSelected = false;
  (this->ClickEmoticon).bIsLacked = false;
  (this->ClickEmoticon).bIsCustomDisabled = false;
  (this->TooltipTextEmoticon).StringTableType = StringUi;
  (this->TooltipTextEmoticon).StringTableID = 0xc386;
  (this->TooltipTextMacro).StringTableType = StringUi;
  (this->TooltipTextMacro).StringTableID = 0xc385;
  (this->TooltipTextExpand).StringTableType = StringUi;
  (this->TooltipTextExpand).StringTableID = 0xc387;
  (this->TooltipTextCollapse).StringTableType = StringUi;
  (this->TooltipTextCollapse).StringTableID = 0xc38d;
  (this->TooltipTextMaximize).StringTableType = StringUi;
  (this->TooltipTextMaximize).StringTableID = 0xc39c;
  (this->TooltipTextMaximize).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextMaximize).StringEnumTableNameID.Number = 0;
  (this->TooltipTextMaximize).DateTime.Ticks = 0;
  (this->TooltipTextMaximize).TimeSpan.Ticks = 0;
  (this->TooltipTextMaximize).TimeExpressionType = None;
  (this->TooltipTextMaximize).IsExpression = false;
  (this->TooltipTextMaximize).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextMaximize).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextMaximize).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextMaximize).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextMaximize).FormatArgs.ArrayNum = 0;
  (this->TooltipTextMaximize).FormatArgs.ArrayMax = 0;
  (this->TooltipTextLocationInfo).StringTableType = StringUi;
  (this->TooltipTextLocationInfo).StringTableID = 0xc38c;
  (this->TooltipTextLocationInfo).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextLocationInfo).StringEnumTableNameID.Number = 0;
  (this->TooltipTextLocationInfo).DateTime.Ticks = 0;
  (this->TooltipTextLocationInfo).TimeSpan.Ticks = 0;
  (this->TooltipTextLocationInfo).TimeExpressionType = None;
  (this->TooltipTextLocationInfo).IsExpression = false;
  (this->TooltipTextLocationInfo).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextLocationInfo).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextLocationInfo).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextLocationInfo).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TooltipTextLocationInfo).FormatArgs.ArrayNum = 0;
  (this->TooltipTextLocationInfo).FormatArgs.ArrayMax = 0;
  (this->TooltipTextCreateGroup).StringTableType = StringUi;
  (this->TooltipTextCreateGroup).StringTableID = 0xc38a;
  (this->TooltipTextCreateGroup).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextCreateGroup).StringEnumTableNameID.Number = 0;
  (this->TooltipTextCreateGroup).DateTime.Ticks = 0;
  (this->TooltipTextCreateGroup).TimeSpan.Ticks = 0;
  (this->TooltipTextCreateGroup).TimeExpressionType = None;
  (this->TooltipTextCreateGroup).IsExpression = false;
  (this->TooltipTextCreateGroup).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextCreateGroup).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextCreateGroup).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextCreateGroup).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextCreateGroup).FormatArgs.ArrayNum = 0;
  (this->TooltipTextCreateGroup).FormatArgs.ArrayMax = 0;
  (this->TooltipTextCreateCustom).StringTableType = StringUi;
  (this->TooltipTextCreateCustom).StringTableID = 0xc389;
  (this->TooltipTextCreateCustom).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextCreateCustom).StringEnumTableNameID.Number = 0;
  (this->TooltipTextCreateCustom).DateTime.Ticks = 0;
  (this->TooltipTextCreateCustom).TimeSpan.Ticks = 0;
  (this->TooltipTextCreateCustom).TimeExpressionType = None;
  (this->TooltipTextCreateCustom).IsExpression = false;
  (this->TooltipTextCreateCustom).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextCreateCustom).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextCreateCustom).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextCreateCustom).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TooltipTextCreateCustom).FormatArgs.ArrayNum = 0;
  (this->TooltipTextCreateCustom).FormatArgs.ArrayMax = 0;
  (this->TooltipTextOption).StringTableType = StringUi;
  (this->TooltipTextOption).StringTableID = 0xc38b;
  (this->TooltipTextOption).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextOption).StringEnumTableNameID.Number = 0;
  (this->TooltipTextOption).DateTime.Ticks = 0;
  (this->TooltipTextOption).TimeSpan.Ticks = 0;
  (this->TooltipTextOption).TimeExpressionType = None;
  (this->TooltipTextOption).IsExpression = false;
  (this->TooltipTextOption).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextOption).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextOption).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextOption).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextOption).FormatArgs.ArrayNum = 0;
  (this->TooltipTextOption).FormatArgs.ArrayMax = 0;
  (this->TooltipTextBookmark).StringTableType = StringUi;
  (this->TooltipTextBookmark).StringTableID = 0xc39d;
  (this->TooltipTextBookmark).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextBookmark).StringEnumTableNameID.Number = 0;
  (this->TooltipTextBookmark).DateTime.Ticks = 0;
  (this->TooltipTextBookmark).TimeSpan.Ticks = 0;
  (this->TooltipTextBookmark).TimeExpressionType = None;
  (this->TooltipTextBookmark).IsExpression = false;
  (this->TooltipTextBookmark).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextBookmark).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextBookmark).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextBookmark).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextBookmark).FormatArgs.ArrayNum = 0;
  (this->TooltipTextBookmark).FormatArgs.ArrayMax = 0;
  (this->TooltipTextCustomSetting).StringTableType = StringUi;
  (this->TooltipTextCustomSetting).StringTableID = 0xc39e;
  (this->TooltipTextCustomSetting).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextCustomSetting).StringEnumTableNameID.Number = 0;
  (this->TooltipTextCustomSetting).DateTime.Ticks = 0;
  (this->TooltipTextCustomSetting).TimeSpan.Ticks = 0;
  (this->TooltipTextCustomSetting).TimeExpressionType = None;
  (this->TooltipTextCustomSetting).IsExpression = false;
  (this->TooltipTextCustomSetting).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextCustomSetting).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextCustomSetting).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextCustomSetting).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextCustomSetting).FormatArgs.ArrayNum = 0;
  (this->TooltipTextCustomSetting).FormatArgs.ArrayMax = 0;
  (this->TooltipTextGroupSetting).StringTableType = StringUi;
  (this->TooltipTextGroupSetting).StringTableID = 0xc39f;
  (this->TooltipTextGroupSetting).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextGroupSetting).StringEnumTableNameID.Number = 0;
  (this->TooltipTextGroupSetting).DateTime.Ticks = 0;
  (this->TooltipTextGroupSetting).TimeSpan.Ticks = 0;
  (this->TooltipTextGroupSetting).TimeExpressionType = None;
  (this->TooltipTextGroupSetting).IsExpression = false;
  (this->TooltipTextGroupSetting).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextGroupSetting).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextGroupSetting).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextGroupSetting).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TooltipTextGroupSetting).FormatArgs.ArrayNum = 0;
  (this->TooltipTextGroupSetting).FormatArgs.ArrayMax = 0;
  (this->TooltipTextExit).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextExit).StringEnumTableNameID.Number = 0;
  (this->TooltipTextExit).DateTime.Ticks = 0;
  (this->TooltipTextExit).TimeSpan.Ticks = 0;
  (this->TooltipTextExit).TimeExpressionType = None;
  (this->TooltipTextExit).IsExpression = false;
  (this->TooltipTextExit).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextExit).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextExit).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextExit).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextExit).FormatArgs.ArrayNum = 0;
  (this->TooltipTextExit).FormatArgs.ArrayMax = 0;
  (this->TooltipTextSend).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextSend).StringEnumTableNameID.Number = 0;
  (this->TooltipTextSend).DateTime.Ticks = 0;
  (this->TooltipTextSend).TimeSpan.Ticks = 0;
  (this->TooltipTextSend).TimeExpressionType = None;
  (this->TooltipTextSend).IsExpression = false;
  (this->TooltipTextSend).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextSend).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextSend).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextSend).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextSend).FormatArgs.ArrayNum = 0;
  (this->TooltipTextSend).FormatArgs.ArrayMax = 0;
  (this->TooltipTextVoiceInput).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextVoiceInput).StringEnumTableNameID.Number = 0;
  (this->TooltipTextVoiceInput).DateTime.Ticks = 0;
  (this->TooltipTextVoiceInput).TimeSpan.Ticks = 0;
  (this->TooltipTextVoiceInput).TimeExpressionType = None;
  (this->TooltipTextVoiceInput).IsExpression = false;
  (this->TooltipTextVoiceInput).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextVoiceInput).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextVoiceInput).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextVoiceInput).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextVoiceInput).FormatArgs.ArrayNum = 0;
  (this->TooltipTextVoiceInput).FormatArgs.ArrayMax = 0;
  (this->TooltipTextVoiceInputDisable).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextVoiceInputDisable).StringEnumTableNameID.Number = 0;
  (this->TooltipTextVoiceInputDisable).DateTime.Ticks = 0;
  (this->TooltipTextVoiceInputDisable).TimeSpan.Ticks = 0;
  (this->TooltipTextVoiceInputDisable).TimeExpressionType = None;
  (this->TooltipTextVoiceInputDisable).IsExpression = false;
  (this->TooltipTextVoiceInputDisable).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextVoiceInputDisable).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextVoiceInputDisable).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextVoiceInputDisable).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextVoiceInputDisable).FormatArgs.ArrayNum = 0;
  (this->TooltipTextVoiceInputDisable).FormatArgs.ArrayMax = 0;
  (this->TooltipTextWhisper).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextWhisper).StringEnumTableNameID.Number = 0;
  (this->TooltipTextWhisper).DateTime.Ticks = 0;
  (this->TooltipTextWhisper).TimeSpan.Ticks = 0;
  (this->TooltipTextWhisper).TimeExpressionType = None;
  (this->TooltipTextWhisper).IsExpression = false;
  (this->TooltipTextWhisper).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextWhisper).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextWhisper).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextWhisper).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextWhisper).FormatArgs.ArrayNum = 0;
  (this->TooltipTextWhisper).FormatArgs.ArrayMax = 0;
  (this->TooltipTextExit).StringTableType = StringUi;
  (this->TooltipTextExit).StringTableID = 0xc3a0;
  (this->TooltipTextSend).StringTableType = StringUi;
  (this->TooltipTextSend).StringTableID = 0xc384;
  (this->TooltipTextVoiceInput).StringTableType = StringUi;
  (this->TooltipTextVoiceInput).StringTableID = 0xc381;
  (this->TooltipTextVoiceInputDisable).StringTableType = StringUi;
  (this->TooltipTextVoiceInputDisable).StringTableID = 0xc382;
  (this->TooltipTextWhisper).StringTableType = StringUi;
  (this->TooltipTextWhisper).StringTableID = 0xc383;
  return this;
}

// UDS_VM_Chat_Functions @ 14b614280

UDS_VM_Chat_Functions * __thiscall
UDS_VM_Chat_Functions::UDS_VM_Chat_Functions
          (UDS_VM_Chat_Functions *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Functions__6B_;
  *(undefined8 *)&(this->ClickEmoticon).Delegate = 0;
  *(undefined8 *)&(this->ClickEmoticon).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEmoticon).Delegate.field_0x10 = 0;
  (this->ClickChatMacro)._padding_ = '\0';
  (this->ClickChatMacro).bIsCustomSelected = false;
  (this->ClickChatMacro).bIsLacked = false;
  (this->ClickChatMacro).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChatMacro).Delegate = 0;
  *(undefined8 *)&(this->ClickChatMacro).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatMacro).Delegate.field_0x10 = 0;
  (this->ClickNormalMode)._padding_ = '\0';
  (this->ClickNormalMode).bIsCustomSelected = false;
  (this->ClickNormalMode).bIsLacked = false;
  (this->ClickNormalMode).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickNormalMode).Delegate = 0;
  *(undefined8 *)&(this->ClickNormalMode).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickNormalMode).Delegate.field_0x10 = 0;
  (this->ClickLocationInfo)._padding_ = '\0';
  (this->ClickLocationInfo).bIsCustomSelected = false;
  (this->ClickLocationInfo).bIsLacked = false;
  (this->ClickLocationInfo).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickLocationInfo).Delegate = 0;
  *(undefined8 *)&(this->ClickLocationInfo).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickLocationInfo).Delegate.field_0x10 = 0;
  (this->ClickCreateGroup)._padding_ = '\0';
  (this->ClickCreateGroup).bIsCustomSelected = false;
  (this->ClickCreateGroup).bIsLacked = false;
  (this->ClickCreateGroup).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCreateGroup).Delegate = 0;
  *(undefined8 *)&(this->ClickCreateGroup).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCreateGroup).Delegate.field_0x10 = 0;
  (this->ClickCreateCustom)._padding_ = '\0';
  (this->ClickCreateCustom).bIsCustomSelected = false;
  (this->ClickCreateCustom).bIsLacked = false;
  (this->ClickCreateCustom).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCreateCustom).Delegate = 0;
  *(undefined8 *)&(this->ClickCreateCustom).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCreateCustom).Delegate.field_0x10 = 0;
  (this->ClickOption)._padding_ = '\0';
  (this->ClickOption).bIsCustomSelected = false;
  (this->ClickOption).bIsLacked = false;
  (this->ClickOption).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickOption).Delegate = 0;
  *(undefined8 *)&(this->ClickOption).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOption).Delegate.field_0x10 = 0;
  (this->TooltipTextEmoticon).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextEmoticon).StringEnumTableNameID.Number = 0;
  (this->TooltipTextEmoticon).DateTime.Ticks = 0;
  (this->TooltipTextEmoticon).TimeSpan.Ticks = 0;
  (this->TooltipTextEmoticon).TimeExpressionType = None;
  (this->TooltipTextEmoticon).IsExpression = false;
  (this->TooltipTextEmoticon).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextEmoticon).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextEmoticon).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextEmoticon).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextEmoticon).FormatArgs.ArrayNum = 0;
  (this->TooltipTextEmoticon).FormatArgs.ArrayMax = 0;
  (this->TooltipTextMacro).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextMacro).StringEnumTableNameID.Number = 0;
  (this->TooltipTextMacro).DateTime.Ticks = 0;
  (this->TooltipTextMacro).TimeSpan.Ticks = 0;
  (this->TooltipTextMacro).TimeExpressionType = None;
  (this->TooltipTextMacro).IsExpression = false;
  (this->TooltipTextMacro).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TooltipTextMacro).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextMacro).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextMacro).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextMacro).FormatArgs.ArrayNum = 0;
  (this->TooltipTextMacro).FormatArgs.ArrayMax = 0;
  (this->TooltipTextExpand).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextExpand).StringEnumTableNameID.Number = 0;
  (this->TooltipTextExpand).DateTime.Ticks = 0;
  (this->TooltipTextExpand).TimeSpan.Ticks = 0;
  (this->TooltipTextExpand).TimeExpressionType = None;
  (this->TooltipTextExpand).IsExpression = false;
  (this->TooltipTextExpand).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextExpand).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextExpand).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextExpand).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextExpand).FormatArgs.ArrayNum = 0;
  (this->TooltipTextExpand).FormatArgs.ArrayMax = 0;
  (this->TooltipTextCollapse).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextCollapse).StringEnumTableNameID.Number = 0;
  (this->TooltipTextCollapse).DateTime.Ticks = 0;
  (this->TooltipTextCollapse).TimeSpan.Ticks = 0;
  (this->TooltipTextCollapse).TimeExpressionType = None;
  (this->TooltipTextCollapse).IsExpression = false;
  (this->TooltipTextCollapse).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextCollapse).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextCollapse).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextCollapse).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextCollapse).FormatArgs.ArrayNum = 0;
  (this->TooltipTextCollapse).FormatArgs.ArrayMax = 0;
  (this->ClickEmoticon)._padding_ = '\0';
  (this->ClickEmoticon).bIsCustomSelected = false;
  (this->ClickEmoticon).bIsLacked = false;
  (this->ClickEmoticon).bIsCustomDisabled = false;
  (this->TooltipTextEmoticon).StringTableType = StringUi;
  (this->TooltipTextEmoticon).StringTableID = 0xc386;
  (this->TooltipTextMacro).StringTableType = StringUi;
  (this->TooltipTextMacro).StringTableID = 0xc385;
  (this->TooltipTextExpand).StringTableType = StringUi;
  (this->TooltipTextExpand).StringTableID = 0xc387;
  (this->TooltipTextCollapse).StringTableType = StringUi;
  (this->TooltipTextCollapse).StringTableID = 0xc38d;
  (this->TooltipTextMaximize).StringTableType = StringUi;
  (this->TooltipTextMaximize).StringTableID = 0xc39c;
  (this->TooltipTextMaximize).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextMaximize).StringEnumTableNameID.Number = 0;
  (this->TooltipTextMaximize).DateTime.Ticks = 0;
  (this->TooltipTextMaximize).TimeSpan.Ticks = 0;
  (this->TooltipTextMaximize).TimeExpressionType = None;
  (this->TooltipTextMaximize).IsExpression = false;
  (this->TooltipTextMaximize).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextMaximize).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextMaximize).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextMaximize).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextMaximize).FormatArgs.ArrayNum = 0;
  (this->TooltipTextMaximize).FormatArgs.ArrayMax = 0;
  (this->TooltipTextLocationInfo).StringTableType = StringUi;
  (this->TooltipTextLocationInfo).StringTableID = 0xc38c;
  (this->TooltipTextLocationInfo).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextLocationInfo).StringEnumTableNameID.Number = 0;
  (this->TooltipTextLocationInfo).DateTime.Ticks = 0;
  (this->TooltipTextLocationInfo).TimeSpan.Ticks = 0;
  (this->TooltipTextLocationInfo).TimeExpressionType = None;
  (this->TooltipTextLocationInfo).IsExpression = false;
  (this->TooltipTextLocationInfo).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextLocationInfo).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextLocationInfo).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextLocationInfo).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TooltipTextLocationInfo).FormatArgs.ArrayNum = 0;
  (this->TooltipTextLocationInfo).FormatArgs.ArrayMax = 0;
  (this->TooltipTextCreateGroup).StringTableType = StringUi;
  (this->TooltipTextCreateGroup).StringTableID = 0xc38a;
  (this->TooltipTextCreateGroup).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextCreateGroup).StringEnumTableNameID.Number = 0;
  (this->TooltipTextCreateGroup).DateTime.Ticks = 0;
  (this->TooltipTextCreateGroup).TimeSpan.Ticks = 0;
  (this->TooltipTextCreateGroup).TimeExpressionType = None;
  (this->TooltipTextCreateGroup).IsExpression = false;
  (this->TooltipTextCreateGroup).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextCreateGroup).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextCreateGroup).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextCreateGroup).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextCreateGroup).FormatArgs.ArrayNum = 0;
  (this->TooltipTextCreateGroup).FormatArgs.ArrayMax = 0;
  (this->TooltipTextCreateCustom).StringTableType = StringUi;
  (this->TooltipTextCreateCustom).StringTableID = 0xc389;
  (this->TooltipTextCreateCustom).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextCreateCustom).StringEnumTableNameID.Number = 0;
  (this->TooltipTextCreateCustom).DateTime.Ticks = 0;
  (this->TooltipTextCreateCustom).TimeSpan.Ticks = 0;
  (this->TooltipTextCreateCustom).TimeExpressionType = None;
  (this->TooltipTextCreateCustom).IsExpression = false;
  (this->TooltipTextCreateCustom).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextCreateCustom).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextCreateCustom).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextCreateCustom).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TooltipTextCreateCustom).FormatArgs.ArrayNum = 0;
  (this->TooltipTextCreateCustom).FormatArgs.ArrayMax = 0;
  (this->TooltipTextOption).StringTableType = StringUi;
  (this->TooltipTextOption).StringTableID = 0xc38b;
  (this->TooltipTextOption).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextOption).StringEnumTableNameID.Number = 0;
  (this->TooltipTextOption).DateTime.Ticks = 0;
  (this->TooltipTextOption).TimeSpan.Ticks = 0;
  (this->TooltipTextOption).TimeExpressionType = None;
  (this->TooltipTextOption).IsExpression = false;
  (this->TooltipTextOption).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextOption).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextOption).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextOption).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextOption).FormatArgs.ArrayNum = 0;
  (this->TooltipTextOption).FormatArgs.ArrayMax = 0;
  (this->TooltipTextBookmark).StringTableType = StringUi;
  (this->TooltipTextBookmark).StringTableID = 0xc39d;
  (this->TooltipTextBookmark).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextBookmark).StringEnumTableNameID.Number = 0;
  (this->TooltipTextBookmark).DateTime.Ticks = 0;
  (this->TooltipTextBookmark).TimeSpan.Ticks = 0;
  (this->TooltipTextBookmark).TimeExpressionType = None;
  (this->TooltipTextBookmark).IsExpression = false;
  (this->TooltipTextBookmark).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextBookmark).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextBookmark).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextBookmark).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextBookmark).FormatArgs.ArrayNum = 0;
  (this->TooltipTextBookmark).FormatArgs.ArrayMax = 0;
  (this->TooltipTextCustomSetting).StringTableType = StringUi;
  (this->TooltipTextCustomSetting).StringTableID = 0xc39e;
  (this->TooltipTextCustomSetting).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextCustomSetting).StringEnumTableNameID.Number = 0;
  (this->TooltipTextCustomSetting).DateTime.Ticks = 0;
  (this->TooltipTextCustomSetting).TimeSpan.Ticks = 0;
  (this->TooltipTextCustomSetting).TimeExpressionType = None;
  (this->TooltipTextCustomSetting).IsExpression = false;
  (this->TooltipTextCustomSetting).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextCustomSetting).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextCustomSetting).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextCustomSetting).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextCustomSetting).FormatArgs.ArrayNum = 0;
  (this->TooltipTextCustomSetting).FormatArgs.ArrayMax = 0;
  (this->TooltipTextGroupSetting).StringTableType = StringUi;
  (this->TooltipTextGroupSetting).StringTableID = 0xc39f;
  (this->TooltipTextGroupSetting).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextGroupSetting).StringEnumTableNameID.Number = 0;
  (this->TooltipTextGroupSetting).DateTime.Ticks = 0;
  (this->TooltipTextGroupSetting).TimeSpan.Ticks = 0;
  (this->TooltipTextGroupSetting).TimeExpressionType = None;
  (this->TooltipTextGroupSetting).IsExpression = false;
  (this->TooltipTextGroupSetting).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextGroupSetting).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextGroupSetting).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextGroupSetting).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TooltipTextGroupSetting).FormatArgs.ArrayNum = 0;
  (this->TooltipTextGroupSetting).FormatArgs.ArrayMax = 0;
  (this->TooltipTextExit).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextExit).StringEnumTableNameID.Number = 0;
  (this->TooltipTextExit).DateTime.Ticks = 0;
  (this->TooltipTextExit).TimeSpan.Ticks = 0;
  (this->TooltipTextExit).TimeExpressionType = None;
  (this->TooltipTextExit).IsExpression = false;
  (this->TooltipTextExit).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextExit).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextExit).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextExit).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextExit).FormatArgs.ArrayNum = 0;
  (this->TooltipTextExit).FormatArgs.ArrayMax = 0;
  (this->TooltipTextSend).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextSend).StringEnumTableNameID.Number = 0;
  (this->TooltipTextSend).DateTime.Ticks = 0;
  (this->TooltipTextSend).TimeSpan.Ticks = 0;
  (this->TooltipTextSend).TimeExpressionType = None;
  (this->TooltipTextSend).IsExpression = false;
  (this->TooltipTextSend).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextSend).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextSend).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextSend).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextSend).FormatArgs.ArrayNum = 0;
  (this->TooltipTextSend).FormatArgs.ArrayMax = 0;
  (this->TooltipTextVoiceInput).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextVoiceInput).StringEnumTableNameID.Number = 0;
  (this->TooltipTextVoiceInput).DateTime.Ticks = 0;
  (this->TooltipTextVoiceInput).TimeSpan.Ticks = 0;
  (this->TooltipTextVoiceInput).TimeExpressionType = None;
  (this->TooltipTextVoiceInput).IsExpression = false;
  (this->TooltipTextVoiceInput).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextVoiceInput).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextVoiceInput).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextVoiceInput).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextVoiceInput).FormatArgs.ArrayNum = 0;
  (this->TooltipTextVoiceInput).FormatArgs.ArrayMax = 0;
  (this->TooltipTextVoiceInputDisable).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextVoiceInputDisable).StringEnumTableNameID.Number = 0;
  (this->TooltipTextVoiceInputDisable).DateTime.Ticks = 0;
  (this->TooltipTextVoiceInputDisable).TimeSpan.Ticks = 0;
  (this->TooltipTextVoiceInputDisable).TimeExpressionType = None;
  (this->TooltipTextVoiceInputDisable).IsExpression = false;
  (this->TooltipTextVoiceInputDisable).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextVoiceInputDisable).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextVoiceInputDisable).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextVoiceInputDisable).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextVoiceInputDisable).FormatArgs.ArrayNum = 0;
  (this->TooltipTextVoiceInputDisable).FormatArgs.ArrayMax = 0;
  (this->TooltipTextWhisper).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TooltipTextWhisper).StringEnumTableNameID.Number = 0;
  (this->TooltipTextWhisper).DateTime.Ticks = 0;
  (this->TooltipTextWhisper).TimeSpan.Ticks = 0;
  (this->TooltipTextWhisper).TimeExpressionType = None;
  (this->TooltipTextWhisper).IsExpression = false;
  (this->TooltipTextWhisper).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TooltipTextWhisper).UniqueString.Data.ArrayNum = 0;
  (this->TooltipTextWhisper).UniqueString.Data.ArrayMax = 0;
  (this->TooltipTextWhisper).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TooltipTextWhisper).FormatArgs.ArrayNum = 0;
  (this->TooltipTextWhisper).FormatArgs.ArrayMax = 0;
  (this->TooltipTextExit).StringTableType = StringUi;
  (this->TooltipTextExit).StringTableID = 0xc3a0;
  (this->TooltipTextSend).StringTableType = StringUi;
  (this->TooltipTextSend).StringTableID = 0xc384;
  (this->TooltipTextVoiceInput).StringTableType = StringUi;
  (this->TooltipTextVoiceInput).StringTableID = 0xc381;
  (this->TooltipTextVoiceInputDisable).StringTableType = StringUi;
  (this->TooltipTextVoiceInputDisable).StringTableID = 0xc382;
  (this->TooltipTextWhisper).StringTableType = StringUi;
  (this->TooltipTextWhisper).StringTableID = 0xc383;
  return this;
}

// ~UDS_VM_Chat_Functions @ 14b6167a0

void __thiscall UDS_VM_Chat_Functions::~UDS_VM_Chat_Functions(UDS_VM_Chat_Functions *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Functions__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextWhisper).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextWhisper).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextWhisper).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextWhisper).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->TooltipTextVoiceInputDisable).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextVoiceInputDisable).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextVoiceInputDisable).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextVoiceInputDisable).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextVoiceInput).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextVoiceInput).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextVoiceInput).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextVoiceInput).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextSend).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextSend).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextSend).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextSend).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextExit).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextExit).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextExit).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextExit).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextGroupSetting).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextGroupSetting).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextGroupSetting).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextGroupSetting).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextCustomSetting).FormatArgs.AllocatorInstance.Data
             ,(this->TooltipTextCustomSetting).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextCustomSetting).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextCustomSetting).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextBookmark).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextBookmark).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextBookmark).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextBookmark).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextOption).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextOption).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextOption).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextOption).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextCreateCustom).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextCreateCustom).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextCreateCustom).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextCreateCustom).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextCreateGroup).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextCreateGroup).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextCreateGroup).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextCreateGroup).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextLocationInfo).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextLocationInfo).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextLocationInfo).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextLocationInfo).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextMaximize).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextMaximize).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextMaximize).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextMaximize).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextCollapse).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextCollapse).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextCollapse).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextCollapse).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextExpand).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextExpand).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextExpand).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextExpand).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextMacro).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextMacro).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextMacro).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextMacro).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TooltipTextEmoticon).FormatArgs.AllocatorInstance.Data,
             (this->TooltipTextEmoticon).FormatArgs.ArrayNum);
  pFVar1 = (this->TooltipTextEmoticon).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TooltipTextEmoticon).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickOption).Delegate);
  pvVar2 = *(void **)&(this->ClickOption).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickOption).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCreateCustom).Delegate);
  pvVar2 = *(void **)&(this->ClickCreateCustom).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCreateCustom).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCreateGroup).Delegate);
  pvVar2 = *(void **)&(this->ClickCreateGroup).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCreateGroup).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickLocationInfo).Delegate);
  pvVar2 = *(void **)&(this->ClickLocationInfo).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickLocationInfo).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickNormalMode).Delegate);
  pvVar2 = *(void **)&(this->ClickNormalMode).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickNormalMode).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickChatMacro).Delegate);
  pvVar2 = *(void **)&(this->ClickChatMacro).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickChatMacro).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEmoticon).Delegate);
  pvVar2 = *(void **)&(this->ClickEmoticon).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEmoticon).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b618ec0

IClassDescriptor * __thiscall
UDS_VM_Chat_Functions::GetFieldNotificationDescriptor(UDS_VM_Chat_Functions *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_Functions::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6195c0

UClass * __cdecl UDS_VM_Chat_Functions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_Functions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_Functions",
               &Z_Registration_Info_UClass_UDS_VM_Chat_Functions.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_Functions,0x6d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_Functions>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_Functions>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_Functions.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_Functions @ 14b61a1c0

void __cdecl UDS_VM_Chat_Functions::StaticRegisterNativesUDS_VM_Chat_Functions(void)

{
  return;
}

// BindModel @ 14bd47a00

void __thiscall UDS_VM_Chat_Functions::BindModel(UDS_VM_Chat_Functions *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeChattingTabType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChattingTabType,int),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_Functions>
              (&pUVar1->OnChangeChattingTabType,(UDS_VM_Chat_Functions *)&stack0x00000010,
               (pmf_41bf2a61 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatMode,this
              );
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChatMode),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Functions>
              (&pUVar1->OnChangedChatMode,(UDS_VM_Chat_Functions *)&stack0x00000010,
               (pmf_db0390fa *)this);
  }
  return;
}

// OnChangeChattingTabType @ 14bd6ead0

void __thiscall
UDS_VM_Chat_Functions::OnChangeChattingTabType
          (UDS_VM_Chat_Functions *this,EDS_ChattingTabType param_1,int param_2)

{
  return;
}

// OnChangedChatMode @ 14bd6f950

void __thiscall
UDS_VM_Chat_Functions::OnChangedChatMode(UDS_VM_Chat_Functions *this,EDS_ChatMode param_1)

{
  FDS_EventDelegate<EDS_ViewModelTemplateKey_const_,bool_const_> *this_00;
  int iVar1;
  UDS_ChatEvent *pUVar2;
  FName FVar3;
  FName local_18;
  int local_10;
  
  iVar1 = FFieldNotificationClassDescriptor::EmoticonVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::EmoticonVisibility.FieldName;
  if (param_1 == Simple) {
    if (this->EmoticonVisibility != SelfHitTestInvisible) {
      this->EmoticonVisibility = SelfHitTestInvisible;
      local_10 = iVar1;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar1 = FFieldNotificationClassDescriptor::ChatMacroVisibility.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::ChatMacroVisibility.FieldName;
    if (this->ChatMacroVisibility != SelfHitTestInvisible) {
      this->ChatMacroVisibility = SelfHitTestInvisible;
      local_10 = iVar1;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar1 = FFieldNotificationClassDescriptor::NormalModeVisibility.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::NormalModeVisibility.FieldName;
    if (this->NormalModeVisibility != SelfHitTestInvisible) {
      this->NormalModeVisibility = SelfHitTestInvisible;
      local_10 = iVar1;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar1 = FFieldNotificationClassDescriptor::LocationInfoVisibility.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::LocationInfoVisibility.FieldName;
    if (this->LocationInfoVisibility != SelfHitTestInvisible) {
      this->LocationInfoVisibility = SelfHitTestInvisible;
      local_10 = iVar1;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar1 = FFieldNotificationClassDescriptor::CreateGroupVisibility.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::CreateGroupVisibility.FieldName;
    if (this->CreateGroupVisibility != SelfHitTestInvisible) {
      this->CreateGroupVisibility = SelfHitTestInvisible;
LAB_14bd6fcb6:
      local_18 = FVar3;
      local_10 = iVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
LAB_14bd6fccd:
    FVar3 = FFieldNotificationClassDescriptor::CreateCustomVisibility.FieldName;
    if (this->CreateCustomVisibility != Collapsed) {
      local_10 = FFieldNotificationClassDescriptor::CreateCustomVisibility.BitNumber;
      this->CreateCustomVisibility = Collapsed;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar1 = FFieldNotificationClassDescriptor::OptionVisibility.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::OptionVisibility.FieldName;
    if (this->OptionVisibility == Collapsed) goto LAB_14bd6fd37;
    this->OptionVisibility = Collapsed;
  }
  else {
    if ((param_1 != Normal) && (param_1 != Extended)) {
      if (this->EmoticonVisibility != Collapsed) {
        this->EmoticonVisibility = Collapsed;
        local_10 = iVar1;
        local_18 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      iVar1 = FFieldNotificationClassDescriptor::ChatMacroVisibility.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::ChatMacroVisibility.FieldName;
      if (this->ChatMacroVisibility != Collapsed) {
        this->ChatMacroVisibility = Collapsed;
        local_10 = iVar1;
        local_18 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      iVar1 = FFieldNotificationClassDescriptor::NormalModeVisibility.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::NormalModeVisibility.FieldName;
      if (this->NormalModeVisibility != Collapsed) {
        this->NormalModeVisibility = Collapsed;
        local_10 = iVar1;
        local_18 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      iVar1 = FFieldNotificationClassDescriptor::LocationInfoVisibility.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::LocationInfoVisibility.FieldName;
      if (this->LocationInfoVisibility != Collapsed) {
        this->LocationInfoVisibility = Collapsed;
        local_10 = iVar1;
        local_18 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      iVar1 = FFieldNotificationClassDescriptor::CreateGroupVisibility.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::CreateGroupVisibility.FieldName;
      if (this->CreateGroupVisibility != Collapsed) {
        this->CreateGroupVisibility = Collapsed;
        goto LAB_14bd6fcb6;
      }
      goto LAB_14bd6fccd;
    }
    if (this->EmoticonVisibility != SelfHitTestInvisible) {
      this->EmoticonVisibility = SelfHitTestInvisible;
      local_10 = iVar1;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    FVar3 = FFieldNotificationClassDescriptor::ChatMacroVisibility.FieldName;
    if (this->ChatMacroVisibility != SelfHitTestInvisible) {
      local_10 = FFieldNotificationClassDescriptor::ChatMacroVisibility.BitNumber;
      this->ChatMacroVisibility = SelfHitTestInvisible;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    FVar3 = FFieldNotificationClassDescriptor::NormalModeVisibility.FieldName;
    if (this->NormalModeVisibility != Collapsed) {
      local_10 = FFieldNotificationClassDescriptor::NormalModeVisibility.BitNumber;
      this->NormalModeVisibility = Collapsed;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    FVar3 = FFieldNotificationClassDescriptor::LocationInfoVisibility.FieldName;
    if (this->LocationInfoVisibility != SelfHitTestInvisible) {
      local_10 = FFieldNotificationClassDescriptor::LocationInfoVisibility.BitNumber;
      this->LocationInfoVisibility = SelfHitTestInvisible;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    FVar3 = FFieldNotificationClassDescriptor::CreateGroupVisibility.FieldName;
    if (this->CreateGroupVisibility != SelfHitTestInvisible) {
      local_10 = FFieldNotificationClassDescriptor::CreateGroupVisibility.BitNumber;
      this->CreateGroupVisibility = SelfHitTestInvisible;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar1 = FFieldNotificationClassDescriptor::CreateCustomVisibility.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::CreateCustomVisibility.FieldName;
    if (this->CreateCustomVisibility != SelfHitTestInvisible) {
      this->CreateCustomVisibility = SelfHitTestInvisible;
      local_10 = iVar1;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar1 = FFieldNotificationClassDescriptor::OptionVisibility.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::OptionVisibility.FieldName;
    if (this->OptionVisibility == SelfHitTestInvisible) goto LAB_14bd6fd37;
    this->OptionVisibility = SelfHitTestInvisible;
  }
  local_18 = FVar3;
  local_10 = iVar1;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
LAB_14bd6fd37:
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    this_00 = &pUVar2->OnChatPopup;
    FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
              (this_00,Chat_EmotePopup,false);
    FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
              (this_00,Chat_Macro,false);
    FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
              (this_00,Chat_RecentWhispers,false);
  }
  return;
}

// OnClickChatMacro @ 14bd726b0

void __thiscall
UDS_VM_Chat_Functions::OnClickChatMacro(UDS_VM_Chat_Functions *this,FDS_ButtonEventField *param_1)

{
  UDS_ChatEvent *pUVar1;
  
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
              (&pUVar1->OnChatPopup,Chat_Macro,true);
    return;
  }
  return;
}

// OnClickCreateCustom @ 14bd72a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_Functions::OnClickCreateCustom
          (UDS_VM_Chat_Functions *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_Functions::OnClickCreateCustom",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x60,L"chattingManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    iVar1 = UDS_ChattingManager::GetEmptyCustomDataIndex(this_00);
    if (iVar1 == -1) {
      local_158._0_8_ = 0;
      local_158._8_8_ = 0;
      local_158._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0xc54b,Complete_None_01,&local_158);
      return;
    }
    UDS_ChatUIPopupHelper::OpenCustomSettingPopup(iVar1);
  }
  return;
}

// OnClickCreateGroup @ 14bd72ba0

void __thiscall
UDS_VM_Chat_Functions::OnClickCreateGroup(UDS_VM_Chat_Functions *this,FDS_ButtonEventField *param_1)

{
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UDS_ChatUIPopupHelper::OpenGroupSettingPopup(&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnClickEmoticon @ 14bd72be0

void __thiscall
UDS_VM_Chat_Functions::OnClickEmoticon(UDS_VM_Chat_Functions *this,FDS_ButtonEventField *param_1)

{
  UDS_ChatEvent *pUVar1;
  
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
              (&pUVar1->OnChatPopup,Chat_EmotePopup,true);
    return;
  }
  return;
}

// OnClickLocationInfo @ 14bd73570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_Functions::OnClickLocationInfo
          (UDS_VM_Chat_Functions *this,FDS_ButtonEventField *param_1)

{
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat_Functions::OnClickLocationInfo",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x4f,L"chattingManager == nullptr");
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  else {
    ::FString::FString(&local_148,L"");
    UDS_ChattingManager::SendLocationInfoLink(this_00,&local_148);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// OnClickNormalMode @ 14bd73860

void __thiscall
UDS_VM_Chat_Functions::OnClickNormalMode(UDS_VM_Chat_Functions *this,FDS_ButtonEventField *param_1)

{
  UDS_ChatEvent *pUVar1;
  
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast(&pUVar1->OnChangedChatMode,Normal);
    return;
  }
  return;
}

// OnClickOption @ 14bd73db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_Functions::OnClickOption(UDS_VM_Chat_Functions *this,FDS_ButtonEventField *param_1)

{
  UDS_LogManager *pUVar1;
  UDS_ContentManager *this_00;
  undefined1 auStackY_178 [32];
  EDS_ContentsTabFrameType local_148 [2];
  undefined8 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat_Functions::OnClickOption",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x70,L"[Chat] OnClickOption()");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_Functions::OnClickOption",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x75,L"contentManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_140 = 0;
    local_148[0] = GameOptionChatting;
    UDS_ContentManager::OpenContent(this_00,local_148,(TObjectPtr<UDS_ContentArguments>)&local_140);
  }
  return;
}

// OnSetViewModel @ 14bd80280

void __thiscall
UDS_VM_Chat_Functions::OnSetViewModel
          (UDS_VM_Chat_Functions *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  EDS_ChatMode EVar2;
  UDS_ChatEvent *pUVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  EVar2 = Simple;
  pUVar3 = UDS_ChatEvent::GetEvent();
  if (pUVar3 != (UDS_ChatEvent *)0x0) {
    EVar2 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar3->OnQueryChatMode);
  }
  OnChangedChatMode(this,EVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetChatMacroVisibility @ 14bd879a0

void __thiscall
UDS_VM_Chat_Functions::SetChatMacroVisibility(UDS_VM_Chat_Functions *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatMacroVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatMacroVisibility.FieldName;
  if (this->ChatMacroVisibility != param_1) {
    this->ChatMacroVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCreateCustomVisibility @ 14bd87f70

void __thiscall
UDS_VM_Chat_Functions::SetCreateCustomVisibility
          (UDS_VM_Chat_Functions *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CreateCustomVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CreateCustomVisibility.FieldName;
  if (this->CreateCustomVisibility != param_1) {
    this->CreateCustomVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCreateGroupVisibility @ 14bd87fc0

void __thiscall
UDS_VM_Chat_Functions::SetCreateGroupVisibility
          (UDS_VM_Chat_Functions *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CreateGroupVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CreateGroupVisibility.FieldName;
  if (this->CreateGroupVisibility != param_1) {
    this->CreateGroupVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetEmoticonVisibility @ 14bd88200

void __thiscall
UDS_VM_Chat_Functions::SetEmoticonVisibility(UDS_VM_Chat_Functions *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::EmoticonVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EmoticonVisibility.FieldName;
  if (this->EmoticonVisibility != param_1) {
    this->EmoticonVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetLocationInfoVisibility @ 14bd8a1d0

void __thiscall
UDS_VM_Chat_Functions::SetLocationInfoVisibility
          (UDS_VM_Chat_Functions *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::LocationInfoVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LocationInfoVisibility.FieldName;
  if (this->LocationInfoVisibility != param_1) {
    this->LocationInfoVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetNormalModeVisibility @ 14bd8a410

void __thiscall
UDS_VM_Chat_Functions::SetNormalModeVisibility(UDS_VM_Chat_Functions *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::NormalModeVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NormalModeVisibility.FieldName;
  if (this->NormalModeVisibility != param_1) {
    this->NormalModeVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetOptionVisibility @ 14bd8a4b0

void __thiscall
UDS_VM_Chat_Functions::SetOptionVisibility(UDS_VM_Chat_Functions *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::OptionVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::OptionVisibility.FieldName;
  if (this->OptionVisibility != param_1) {
    this->OptionVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bd8bee0

void __thiscall UDS_VM_Chat_Functions::UnbindModel(UDS_VM_Chat_Functions *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeChattingTabType,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatMode,this
              );
  }
  return;
}

