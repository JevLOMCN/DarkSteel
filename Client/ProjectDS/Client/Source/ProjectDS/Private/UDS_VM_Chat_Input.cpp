// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 50

// SetInputText_WrapperImpl @ 14b611770

void __cdecl UDS_VM_Chat_Input::SetInputText_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_8 [8];
  FName FStack_18;
  int iStack_10;
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0xa0);
  if (plVar2 != plVar1) {
    *(longlong **)((longlong)param_1 + 0xa0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)((longlong)param_2 + 8);
  iStack_10 = FFieldNotificationClassDescriptor::InputText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::InputText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetInputHintText_WrapperImpl @ 14b611780

void __cdecl UDS_VM_Chat_Input::SetInputHintText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::InputHintText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::InputHintText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xb0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetInputTextColor_WrapperImpl @ 14b611790

void __cdecl UDS_VM_Chat_Input::SetInputTextColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0x100)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0x104))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0x108))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x10c))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::InputTextColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::InputTextColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0x100) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0x104) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x108) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetInputSwitcherIndex_WrapperImpl @ 14b6117a0

void __cdecl UDS_VM_Chat_Input::SetInputSwitcherIndex_WrapperImpl(void *param_1,void *param_2)

{
  SetInputSwitcherIndex(param_1,*(int *)param_2);
  return;
}

// SetbIsSendEnabled_WrapperImpl @ 14b6117b0

void __cdecl UDS_VM_Chat_Input::SetbIsSendEnabled_WrapperImpl(void *param_1,void *param_2)

{
  SetSendEnabled(param_1,*(bool *)param_2);
  return;
}

// SetInputVisibility_WrapperImpl @ 14b6117c0

void __cdecl UDS_VM_Chat_Input::SetInputVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetInputVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetChangeInputText_WrapperImpl @ 14b6117d0

void __cdecl UDS_VM_Chat_Input::SetChangeInputText_WrapperImpl(void *param_1,void *param_2)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  FString *pFVar2;
  UDS_ChatEvent *pUVar3;
  longlong lVar4;
  FString FStack_18;
  
  pFVar2 = FText::ToString(param_2);
  FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_18.Data.ArrayNum = (pFVar2->Data).ArrayNum;
  lVar4 = (longlong)FStack_18.Data.ArrayNum;
  _Src = (pFVar2->Data).AllocatorInstance.Data;
  if (FStack_18.Data.ArrayNum == 0) {
    FStack_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_18.Data.ArrayNum,0,(ForAnyElementType *)&FStack_18,FStack_18.Data.ArrayNum
               ,&FStack_18.Data.ArrayMax);
    memcpy(FStack_18.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  bVar1 = ::FString::EndsWith(&FStack_18,L"\r\n",2,IgnoreCase);
  if (bVar1) {
    OnCommitInputText(param_1,&FStack_18);
  }
  else {
    OnChangeInputText(param_1,&FStack_18);
    if (*(char *)((longlong)param_1 + 0x1b8) == '\n') {
      pUVar3 = UDS_ChatEvent::GetEvent();
      if (pUVar3 != (UDS_ChatEvent *)0x0) {
        bVar1 = IsShowRecentWhispers(param_1);
        FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
                  (&pUVar3->OnChatPopup,Chat_RecentWhispers,bVar1);
      }
    }
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetCommitInputText_WrapperImpl @ 14b6117e0

void __cdecl UDS_VM_Chat_Input::SetCommitInputText_WrapperImpl(void *param_1,void *param_2)

{
  FDS_ChatLinkData *pFVar1;
  FString *pFVar2;
  FText *pFVar3;
  
  if (*(int *)((longlong)param_2 + 0x10) == 1) {
    pFVar2 = FText::ToString(param_2);
    OnCommitInputText(param_1,pFVar2);
    return;
  }
  if (*(int *)((longlong)param_2 + 0x10) == 3) {
    pFVar3 = FText::GetEmpty();
    SetInputText(param_1,pFVar3);
    pFVar1 = (FDS_ChatLinkData *)((ForAnyElementType *)((longlong)param_1 + 0x1d0))->Data;
    if (-1 < *(int *)((longlong)param_1 + 0x1dc)) {
      DestructItems<FDS_ChatLinkData,int>(pFVar1,*(int *)((longlong)param_1 + 0x1d8));
      *(undefined4 *)((longlong)param_1 + 0x1d8) = 0;
      return;
    }
    DestructItems<FDS_ChatLinkData,int>(pFVar1,*(int *)((longlong)param_1 + 0x1d8));
    *(undefined4 *)((longlong)param_1 + 0x1d8) = 0;
    if (*(int *)((longlong)param_1 + 0x1dc) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)((longlong)param_1 + 0x1d0),0,
                 (int *)((longlong)param_1 + 0x1dc));
    }
  }
  return;
}

// SetClickSendChat_WrapperImpl @ 14b6117f0

void __cdecl UDS_VM_Chat_Input::SetClickSendChat_WrapperImpl(void *param_1,void *param_2)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString((FText *)((longlong)param_1 + 0xa0));
  OnCommitInputText(param_1,pFVar1);
  return;
}

// SetClickCommitWhisper_WrapperImpl @ 14b611800

void __cdecl UDS_VM_Chat_Input::SetClickCommitWhisper_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  FString *pFVar2;
  UDS_ChatEvent *pUVar3;
  FName FStack_58;
  int iStack_50;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.Data.ArrayNum = 0;
  FStack_38.Data.ArrayMax = 0;
  FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_48.Data.ArrayNum = 0;
  FStack_48.Data.ArrayMax = 0;
  ParseWhisperNickname(param_1,&FStack_38,&FStack_48);
  if ((FStack_38.Data.ArrayNum < 2) && (FStack_48.Data.ArrayNum < 2)) {
    pFVar2 = FText::ToString((FText *)((longlong)param_1 + 0xa0));
    ::FString::TrimStartAndEnd(pFVar2,&FStack_18);
    if (1 < FStack_18.Data.ArrayNum) {
      pFVar2 = FText::ToString((FText *)((longlong)param_1 + 0xa0));
      ::FString::ConcatFC(&FStack_28,pFVar2,L" ");
      OnChangeInputText(param_1,&FStack_28);
      *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
      *(undefined4 *)((longlong)param_1 + 0x120) = 0xffffffff;
      iStack_50 = FFieldNotificationClassDescriptor::TextCursorEvent.BitNumber;
      FStack_58 = FFieldNotificationClassDescriptor::TextCursorEvent.FieldName;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_58);
      if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
      }
    }
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  if (*(char *)((longlong)param_1 + 0x1b8) == '\n') {
    pUVar3 = UDS_ChatEvent::GetEvent();
    if (pUVar3 != (UDS_ChatEvent *)0x0) {
      bVar1 = IsShowRecentWhispers(param_1);
      FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
                (&pUVar3->OnChatPopup,Chat_RecentWhispers,bVar1);
      FDS_EventDelegate<enum_EDS_ChattingType_const_>::Broadcast
                (&pUVar3->OnChangeInputChattingType,*(EDS_ChattingType *)((longlong)param_1 + 0x1b8)
                );
    }
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// StaticClass @ 14b611810

UClass * __cdecl UDS_VM_Chat_Input::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_Input.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_Input",
               &Z_Registration_Info_UClass_UDS_VM_Chat_Input.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_Input,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_Input>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_Input>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_Input.InnerSingleton;
}

// UDS_VM_Chat_Input @ 14b615e00

UDS_VM_Chat_Input * __thiscall
UDS_VM_Chat_Input::UDS_VM_Chat_Input(UDS_VM_Chat_Input *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Input__6B_;
  FText::FText(&this->InputText);
  (this->InputHintText).StringTableType = None;
  (this->InputHintText).StringTableID = 0;
  (this->InputHintText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->InputHintText).StringEnumTableNameID.Number = 0;
  (this->InputHintText).DateTime.Ticks = 0;
  (this->InputHintText).TimeSpan.Ticks = 0;
  (this->InputHintText).TimeExpressionType = None;
  (this->InputHintText).IsExpression = false;
  (this->InputHintText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputHintText).UniqueString.Data.ArrayNum = 0;
  (this->InputHintText).UniqueString.Data.ArrayMax = 0;
  (this->InputHintText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputHintText).FormatArgs.ArrayNum = 0;
  (this->InputHintText).FormatArgs.ArrayMax = 0;
  this->InputSwitcherIndex = 0;
  *(undefined1 *)&(this->TextCursorEvent)._padding_ = 0;
  (this->TextCursorEvent).TextLine = 0;
  (this->TextCursorEvent).TextOffset = 0;
  this->bIsSendEnabled = true;
  this->InputVisibility = Collapsed;
  FText::FText(&(this->ChangeInputText).NewText);
  FText::FText(&(this->CommitInputText).NewText);
  (this->ClickSendChat)._padding_ = '\0';
  (this->ClickSendChat).bIsCustomSelected = false;
  (this->ClickSendChat).bIsLacked = false;
  (this->ClickSendChat).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSendChat).Delegate = 0;
  *(undefined8 *)&(this->ClickSendChat).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSendChat).Delegate.field_0x10 = 0;
  (this->ClickCommitWhisper)._padding_ = '\0';
  (this->ClickCommitWhisper).bIsCustomSelected = false;
  (this->ClickCommitWhisper).bIsLacked = false;
  (this->ClickCommitWhisper).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCommitWhisper).Delegate = 0;
  *(undefined8 *)&(this->ClickCommitWhisper).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCommitWhisper).Delegate.field_0x10 = 0;
  (this->VM_SimpleModeInputFocus).field0_0x0.DebugPtr = (UDS_VM_Chat_InputFocus *)0x0;
  (this->VM_NormalModeInputFocus).field0_0x0.DebugPtr = (UDS_VM_Chat_InputFocus *)0x0;
  (this->VM_ExtendedModeInputFocus).field0_0x0.DebugPtr = (UDS_VM_Chat_InputFocus *)0x0;
  this->ChattingTypeFlag = 0;
  this->InputChattingType = Zone;
  this->SubTabIndex = -1;
  (this->PrevInputText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevInputText).Data.ArrayNum = 0;
  (this->PrevInputText).Data.ArrayMax = 0;
  (this->ChatLinkList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatLinkList).ArrayNum = 0;
  (this->ChatLinkList).ArrayMax = 0;
  return this;
}

// UDS_VM_Chat_Input @ 14b615f60

UDS_VM_Chat_Input * __thiscall
UDS_VM_Chat_Input::UDS_VM_Chat_Input(UDS_VM_Chat_Input *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Input__6B_;
  FText::FText(&this->InputText);
  (this->InputHintText).StringTableType = None;
  (this->InputHintText).StringTableID = 0;
  (this->InputHintText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->InputHintText).StringEnumTableNameID.Number = 0;
  (this->InputHintText).DateTime.Ticks = 0;
  (this->InputHintText).TimeSpan.Ticks = 0;
  (this->InputHintText).TimeExpressionType = None;
  (this->InputHintText).IsExpression = false;
  (this->InputHintText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputHintText).UniqueString.Data.ArrayNum = 0;
  (this->InputHintText).UniqueString.Data.ArrayMax = 0;
  (this->InputHintText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputHintText).FormatArgs.ArrayNum = 0;
  (this->InputHintText).FormatArgs.ArrayMax = 0;
  this->InputSwitcherIndex = 0;
  *(undefined1 *)&(this->TextCursorEvent)._padding_ = 0;
  (this->TextCursorEvent).TextLine = 0;
  (this->TextCursorEvent).TextOffset = 0;
  this->bIsSendEnabled = true;
  this->InputVisibility = Collapsed;
  FText::FText(&(this->ChangeInputText).NewText);
  FText::FText(&(this->CommitInputText).NewText);
  (this->ClickSendChat)._padding_ = '\0';
  (this->ClickSendChat).bIsCustomSelected = false;
  (this->ClickSendChat).bIsLacked = false;
  (this->ClickSendChat).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSendChat).Delegate = 0;
  *(undefined8 *)&(this->ClickSendChat).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSendChat).Delegate.field_0x10 = 0;
  (this->ClickCommitWhisper)._padding_ = '\0';
  (this->ClickCommitWhisper).bIsCustomSelected = false;
  (this->ClickCommitWhisper).bIsLacked = false;
  (this->ClickCommitWhisper).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCommitWhisper).Delegate = 0;
  *(undefined8 *)&(this->ClickCommitWhisper).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCommitWhisper).Delegate.field_0x10 = 0;
  (this->VM_SimpleModeInputFocus).field0_0x0.DebugPtr = (UDS_VM_Chat_InputFocus *)0x0;
  (this->VM_NormalModeInputFocus).field0_0x0.DebugPtr = (UDS_VM_Chat_InputFocus *)0x0;
  (this->VM_ExtendedModeInputFocus).field0_0x0.DebugPtr = (UDS_VM_Chat_InputFocus *)0x0;
  this->ChattingTypeFlag = 0;
  this->InputChattingType = Zone;
  this->SubTabIndex = -1;
  (this->PrevInputText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevInputText).Data.ArrayNum = 0;
  (this->PrevInputText).Data.ArrayMax = 0;
  (this->ChatLinkList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatLinkList).ArrayNum = 0;
  (this->ChatLinkList).ArrayMax = 0;
  return this;
}

// ~UDS_VM_Chat_Input @ 14b6175d0

void __thiscall UDS_VM_Chat_Input::~UDS_VM_Chat_Input(UDS_VM_Chat_Input *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Input__6B_;
  DestructItems<FDS_ChatLinkData,int>
            ((FDS_ChatLinkData *)(this->ChatLinkList).AllocatorInstance.Data,
             (this->ChatLinkList).ArrayNum);
  pFVar1 = (this->ChatLinkList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrevInputText).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCommitWhisper).Delegate);
  pvVar2 = *(void **)&(this->ClickCommitWhisper).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCommitWhisper).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSendChat).Delegate);
  pvVar2 = *(void **)&(this->ClickSendChat).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSendChat).Delegate);
  pIVar3 = (this->CommitInputText).NewText.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->ChangeInputText).NewText.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->InputHintText).FormatArgs.AllocatorInstance.Data,
             (this->InputHintText).FormatArgs.ArrayNum);
  pFVar1 = (this->InputHintText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputHintText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->InputText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b619240

IClassDescriptor * __thiscall
UDS_VM_Chat_Input::GetFieldNotificationDescriptor(UDS_VM_Chat_Input *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_Input::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b619bc0

UClass * __cdecl UDS_VM_Chat_Input::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_Input.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_Input",
               &Z_Registration_Info_UClass_UDS_VM_Chat_Input.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_Input,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_Input>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_Input>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_Input.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_Input @ 14b61a240

void __cdecl UDS_VM_Chat_Input::StaticRegisterNativesUDS_VM_Chat_Input(void)

{
  return;
}

// BindModel @ 14bd48210

void __thiscall UDS_VM_Chat_Input::BindModel(UDS_VM_Chat_Input *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  UDS_ChatEvent *pUVar1;
  UDS_InputEvent *pUVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeInputChattingType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChattingType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Input>
              (&pUVar1->OnChangeInputChattingType,(UDS_VM_Chat_Input *)local_res10,
               (pmf_2346b611 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatMode,this
              );
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChatMode),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Input>
              (&pUVar1->OnChangedChatMode,(UDS_VM_Chat_Input *)local_res10,(pmf_8838bc4d *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnInsertLinkText,this)
    ;
    TMulticastDelegateRegistration<void___cdecl(FDS_ChatLinkData_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_Input>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_ChatLinkData_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnInsertLinkText,(UDS_VM_Chat_Input *)local_res10,(pmf_ef003670 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChatPopup,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ViewModelTemplateKey,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_Input>
              (&pUVar1->OnChatPopup,(UDS_VM_Chat_Input *)local_res10,(pmf_38b3390a *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedWhisper,this
              );
    TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Input>
              ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnSelectedWhisper,(UDS_VM_Chat_Input *)local_res10,(pmf_6239e78e *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedMacro,this);
    TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Input>
              ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnSelectedMacro,(UDS_VM_Chat_Input *)local_res10,(pmf_6239e78e *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatOption,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Input>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedChatOption,(UDS_VM_Chat_Input *)local_res10,(pmf_15b410dc *)this);
  }
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    this_00 = &(pUVar2->OnInputEvent).Subscriptions;
    local_res10[0] = 0x15f91;
    if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
      puVar4 = *(undefined1 **)&(pUVar2->OnInputEvent).Subscriptions.field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar5 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x15f91) * 4);
      if (iVar5 != -1) {
        do {
          piVar3 = (int *)((longlong)iVar5 * 0x50 + *(longlong *)this_00);
          if (*piVar3 == 0x15f91) {
            if (piVar3 != (int *)0x0) goto LAB_14bd484a7;
            break;
          }
          iVar5 = piVar3[0x12];
        } while (iVar5 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f91,
               (bool *)&local_res20);
    piVar3 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bd484a7:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar3 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_Input>
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar3 + 2),
               (UDS_VM_Chat_Input *)local_res18,(pmf_5c602981 *)this);
  }
  return;
}

// BuildSendText @ 14bd49290

FString * __thiscall
UDS_VM_Chat_Input::BuildSendText
          (UDS_VM_Chat_Input *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  undefined1 local_res8 [8];
  FString local_38;
  
  iVar5 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar4 = (this->ChatLinkList).AllocatorInstance.Data;
  iVar6 = (this->ChatLinkList).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar6 * 0x28;
  while( true ) {
    if ((this->ChatLinkList).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FDS_ChatLinkData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (iVar5 < *(int *)(pFVar4 + 0x20)) {
      pFVar3 = ::FString::Mid(param_1,&local_38,iVar5,*(int *)(pFVar4 + 0x20) - iVar5);
      iVar2 = (pFVar3->Data).ArrayNum;
      iVar5 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar5);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    iVar5 = *(int *)(pFVar4 + 0x18) + -1;
    if (*(int *)(pFVar4 + 0x18) == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)(pFVar4 + 0x10),iVar5);
    iVar5 = *(int *)(pFVar4 + 0x24) + *(int *)(pFVar4 + 0x20);
    pFVar4 = pFVar4 + 0x28;
  }
  iVar2 = (param_1->Data).ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (iVar5 < iVar6) {
    ::FString::RightChop(param_1,&local_38,iVar5);
    iVar6 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar6);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// HandleTextDelete @ 14bd64ed0

void __thiscall UDS_VM_Chat_Input::HandleTextDelete(UDS_VM_Chat_Input *this,int param_1,int param_2)

{
  int *piVar1;
  TArray<FDS_ChatLinkData,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  
  uVar7 = 0;
  if (0 < (this->ChatLinkList).ArrayNum) {
    pTVar2 = &this->ChatLinkList;
    lVar10 = 0;
    do {
      uVar8 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < (this->ChatLinkList).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      iVar6 = *(int *)(pFVar9 + lVar10 + 0x20);
      if (iVar6 < param_1 + param_2) {
        if (param_1 < iVar6 + *(int *)(pFVar9 + lVar10 + 0x24)) {
          uVar5 = 0;
          if ((int)uVar7 < (this->ChatLinkList).ArrayNum) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar9 = (pTVar2->AllocatorInstance).Data + lVar10;
          if (*(void **)(pFVar9 + 0x10) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar9 + 0x10));
          }
          if (*(void **)pFVar9 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar9);
          }
          iVar6 = (this->ChatLinkList).ArrayNum + ~uVar7;
          if (iVar6 != 0) {
            memmove(pFVar9,pFVar9 + 0x28,(longlong)iVar6 * 0x28);
          }
          piVar1 = &(this->ChatLinkList).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,&pTVar2->AllocatorInstance,(this->ChatLinkList).ArrayNum,
                     &(this->ChatLinkList).ArrayMax);
          uVar7 = uVar7 - 1;
          lVar10 = lVar10 + -0x28;
        }
      }
      else {
        *(int *)(pFVar9 + lVar10 + 0x20) = iVar6 - param_2;
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 0x28;
    } while ((int)uVar7 < (this->ChatLinkList).ArrayNum);
  }
  return;
}

// HandleTextInsert @ 14bd65090

void __thiscall UDS_VM_Chat_Input::HandleTextInsert(UDS_VM_Chat_Input *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ChatLinkList).ArrayNum;
  pFVar3 = (this->ChatLinkList).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->ChatLinkList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_ChatLinkData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (param_1 <= *(int *)(pFVar3 + 0x20)) {
      *(int *)(pFVar3 + 0x20) = *(int *)(pFVar3 + 0x20) + param_2;
    }
    pFVar3 = pFVar3 + 0x28;
  }
  return;
}

// InitViewModel @ 14bd69b10

void __thiscall UDS_VM_Chat_Input::InitViewModel(UDS_VM_Chat_Input *this)

{
  UDS_VM_Chat_InputFocus *pUVar1;
  
  if ((this->VM_SimpleModeInputFocus).field0_0x0.DebugPtr == (UDS_VM_Chat_InputFocus *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Chat_InputFocus>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_Chat_InputFocus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_SimpleModeInputFocus).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_NormalModeInputFocus).field0_0x0.DebugPtr == (UDS_VM_Chat_InputFocus *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Chat_InputFocus>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_Chat_InputFocus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_NormalModeInputFocus).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_ExtendedModeInputFocus).field0_0x0.DebugPtr == (UDS_VM_Chat_InputFocus *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Chat_InputFocus>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_Chat_InputFocus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_ExtendedModeInputFocus).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// InsertLinkTextAtCursor @ 14bd69df0

void __thiscall
UDS_VM_Chat_Input::InsertLinkTextAtCursor(UDS_VM_Chat_Input *this,FString *param_1,FString *param_2)

{
  int *piVar1;
  TArray<FDS_ChatLinkData,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  ITextData *pIVar6;
  ITextData *pIVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FString *pFVar12;
  FText *pFVar13;
  int iVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  int iVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FString local_d8;
  FString local_c8;
  int local_b8;
  int local_b4;
  FString local_b0;
  FString local_a0;
  FName local_88;
  int local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FText local_48;
  
  pFVar12 = FText::ToString(&this->InputText);
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Data.ArrayNum = (pFVar12->Data).ArrayNum;
  lVar16 = (longlong)local_b0.Data.ArrayNum;
  pFVar5 = (pFVar12->Data).AllocatorInstance.Data;
  if (local_b0.Data.ArrayNum == 0) {
    local_b0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b0.Data.ArrayNum,0,(ForAnyElementType *)&local_b0,local_b0.Data.ArrayNum,
               &local_b0.Data.ArrayMax);
    memcpy(local_b0.Data.AllocatorInstance.Data,pFVar5,lVar16 * 2);
  }
  iVar11 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  ::FString::RightChop(&local_b0,&local_58,iVar11);
  iVar10 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  if (iVar11 < iVar10) {
    iVar10 = iVar11;
  }
  iVar19 = 0;
  if (0 < iVar10) {
    iVar19 = iVar10;
  }
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_b0.Data.ArrayNum != 0) {
    FVar15.Data = local_b0.Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_68,(wchar_t *)FVar15.Data,iVar19);
  ::FString::ConcatFF(&local_78,&local_68,param_1);
  ::FString::ConcatFF(&local_a0,&local_78,&local_58);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  iVar10 = (this->ChatLinkList).ArrayNum;
  pFVar17 = (this->ChatLinkList).AllocatorInstance.Data;
  pFVar5 = pFVar17 + (longlong)iVar10 * 0x28;
  while( true ) {
    if ((this->ChatLinkList).ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDS_ChatLinkData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar17 == pFVar5) break;
    iVar19 = *(int *)(pFVar17 + 0x20);
    if (iVar11 <= iVar19) {
      iVar3 = (param_1->Data).ArrayNum;
      iVar14 = iVar3 + -1 + iVar19;
      if (iVar3 == 0) {
        iVar14 = iVar19;
      }
      *(int *)(pFVar17 + 0x20) = iVar14;
    }
    pFVar17 = pFVar17 + 0x28;
  }
  uVar4 = (param_1->Data).ArrayNum;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_b4 = uVar4 - 1;
  if (uVar4 == 0) {
    local_b4 = 0;
  }
  iVar10 = 0;
  local_b8 = iVar11;
  if (&local_d8 != param_1) {
    pFVar5 = (param_1->Data).AllocatorInstance.Data;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.ArrayNum = uVar4;
    iVar10 = 0;
    if (uVar4 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,0,(ForAnyElementType *)&local_d8,uVar4,&local_d8.Data.ArrayMax);
      memcpy(local_d8.Data.AllocatorInstance.Data,pFVar5,(longlong)(int)uVar4 * 2);
      iVar10 = local_c8.Data.ArrayMax;
    }
  }
  if (&local_c8 != param_2) {
    iVar11 = (param_2->Data).ArrayNum;
    pFVar5 = (param_2->Data).AllocatorInstance.Data;
    local_c8.Data.ArrayNum = iVar11;
    if ((iVar11 == 0) && (iVar10 == 0)) {
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar11,iVar10,(ForAnyElementType *)&local_c8,iVar11,&local_c8.Data.ArrayMax);
      if (iVar11 != 0) {
        memcpy(local_c8.Data.AllocatorInstance.Data,pFVar5,(longlong)iVar11 * 2);
      }
    }
  }
  pTVar2 = &this->ChatLinkList;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 < pFVar5 + (longlong)(this->ChatLinkList).ArrayMax * 0x28
     )) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = (this->ChatLinkList).ArrayNum;
  piVar1 = &(this->ChatLinkList).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  FVar15.Data = local_d8.Data.AllocatorInstance.Data;
  lVar16 = (longlong)iVar11;
  (this->ChatLinkList).ArrayNum = iVar11 + 1;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar5 + lVar16 * 0x28) = 0;
  lVar18 = (longlong)local_d8.Data.ArrayNum;
  *(int *)(pFVar5 + lVar16 * 0x28 + 8) = local_d8.Data.ArrayNum;
  pFVar5 = pFVar5 + lVar16 * 0x28;
  if (local_d8.Data.ArrayNum == 0) {
    *(int *)(pFVar5 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)pFVar5,local_d8.Data.ArrayNum,
               (int *)(pFVar5 + 0xc));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar5,FVar15.Data,lVar18 * 2);
  }
  FVar15.Data = local_c8.Data.AllocatorInstance.Data;
  pFVar17 = pFVar5 + 0x10;
  *(FScriptContainerElement **)pFVar17 = (FScriptContainerElement *)0x0;
  lVar16 = (longlong)local_c8.Data.ArrayNum;
  *(int *)(pFVar5 + 0x18) = local_c8.Data.ArrayNum;
  if (local_c8.Data.ArrayNum == 0) {
    *(int *)(pFVar5 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)pFVar17,local_c8.Data.ArrayNum,
               (int *)(pFVar5 + 0x1c));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar17,FVar15.Data,lVar16 * 2);
  }
  *(int *)(pFVar5 + 0x20) = local_b8;
  *(int *)(pFVar5 + 0x24) = local_b4;
  pFVar13 = FText::FromString(&local_48,&local_a0);
  pIVar6 = (this->InputText).TextData.Reference;
  pIVar7 = (pFVar13->TextData).Reference;
  if (pIVar6 != pIVar7) {
    (this->InputText).TextData.Reference = pIVar7;
    if (pIVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_res10);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  (this->InputText).Flags = pFVar13->Flags;
  local_80 = FFieldNotificationClassDescriptor::InputText.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::InputText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  iVar11 = local_a0.Data.ArrayNum + -1;
  if (local_a0.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  ::FString::AssignRange
            (&this->PrevInputText,(wchar_t *)local_a0.Data.AllocatorInstance.Data,iVar11);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  return;
}

// IsShowRecentWhispers @ 14bd6cbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Chat_Input::IsShowRecentWhispers(UDS_VM_Chat_Input *this)

{
  UDS_ChattingManager *pUVar1;
  UDS_LogManager *pUVar2;
  bool bVar3;
  undefined1 auStackY_188 [32];
  FString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar1 = UDS_ChattingManager::GetInst();
  if (pUVar1 == (UDS_ChattingManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_Input::IsShowRecentWhispers",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1e4,L"chattingManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar3 = false;
  }
  else {
    bVar3 = false;
    if ((this->InputChattingType == Whisper) && ((pUVar1->ChatStateData).ChattingTabType != Whisper)
       ) {
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.Data.ArrayNum = 0;
      local_158.Data.ArrayMax = 0;
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      ParseWhisperNickname(this,&local_158,&local_148);
      bVar3 = local_158.Data.ArrayNum < 2;
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
  }
  return bVar3;
}

// MoveTextCursor @ 14bd6dc90

void __thiscall UDS_VM_Chat_Input::MoveTextCursor(UDS_VM_Chat_Input *this,int param_1,int param_2)

{
  FName local_18;
  int local_10;
  
  (this->TextCursorEvent).TextLine = param_1;
  (this->TextCursorEvent).TextOffset = param_2;
  local_10 = FFieldNotificationClassDescriptor::TextCursorEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextCursorEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnChangeInputChattingType @ 14bd6ed10

void __thiscall
UDS_VM_Chat_Input::OnChangeInputChattingType(UDS_VM_Chat_Input *this,EDS_ChattingType param_1)

{
  FName FVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_ChattingManager *this_00;
  FLinearColor *pFVar5;
  UDS_ChatEvent *pUVar6;
  long64 lVar7;
  FLinearColor_u_0 local_78;
  FDS_Text local_68;
  
  this->InputChattingType = param_1;
  local_68.StringTableType = None;
  local_68.StringTableID = 0;
  local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_68.StringEnumTableNameID.Number = 0;
  local_68.TimeExpressionType = None;
  local_68.IsExpression = false;
  lVar7 = 0xc5d2;
  local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.UniqueString.Data.ArrayNum = 0;
  local_68.UniqueString.Data.ArrayMax = 0;
  local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FormatArgs.ArrayNum = 0;
  local_68.FormatArgs.ArrayMax = 0;
  local_68.DateTime.Ticks = 0;
  local_68.TimeSpan.Ticks = 0;
  if (param_1 != Whisper) {
    lVar7 = 0xc5d1;
  }
  FDS_Text::SetTextFromStringTable(&local_68,StringUi,lVar7);
  iVar3 = FFieldNotificationClassDescriptor::InputHintText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::InputHintText.FieldName;
  FDS_Text::operator=(&this->InputHintText,&local_68);
  FVar2 = FFieldNotificationClassDescriptor::InputHintText.FieldName;
  FFieldNotificationClassDescriptor::InputHintText.FieldName.ComparisonIndex =
       FVar1.ComparisonIndex.Value;
  FFieldNotificationClassDescriptor::InputHintText.FieldName.Number = FVar1.Number;
  local_78._s_0.R =
       (float)FFieldNotificationClassDescriptor::InputHintText.FieldName.ComparisonIndex.Value;
  local_78._s_0.G = (float)FFieldNotificationClassDescriptor::InputHintText.FieldName.Number;
  local_78._s_0.B = (float)iVar3;
  FFieldNotificationClassDescriptor::InputHintText.FieldName = FVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
             local_68.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
  }
  if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
  }
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 != (UDS_ChattingManager *)0x0) {
    pFVar5 = UDS_ChattingManager::GetChattingColor
                       (this_00,(FLinearColor *)&local_78._s_0,this->InputChattingType);
    SetInputTextColor(this,pFVar5);
  }
  pUVar6 = UDS_ChatEvent::GetEvent();
  if (pUVar6 != (UDS_ChatEvent *)0x0) {
    bVar4 = IsShowRecentWhispers(this);
    FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
              (&pUVar6->OnChatPopup,Chat_RecentWhispers,bVar4);
  }
  return;
}

// OnChangeInputText @ 14bd6ef20

void __thiscall UDS_VM_Chat_Input::OnChangeInputText(UDS_VM_Chat_Input *this,FString *param_1)

{
  bool bVar1;
  UDS_ChattingManager *this_00;
  FText *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  EDS_ChattingType local_res18 [8];
  EDS_CommandType local_res20 [8];
  FString local_48;
  FString local_38;
  FText local_28;
  
  ::FString::Replace(param_1,&local_38,L"\r\n",L"",IgnoreCase);
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 != (UDS_ChattingManager *)0x0) {
    local_res18[0] = None;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_res20[0] = None;
    bVar1 = ::FString::StartsWith(param_1,L"/",1,IgnoreCase);
    if ((bVar1) && (bVar1 = ::FString::EndsWith(param_1,L" ",1,IgnoreCase), bVar1)) {
      UDS_ChattingManager::ParseChattingCommand(this_00,param_1,local_res18,local_res20,&local_48);
    }
    if (local_res18[0] == None) {
      UpdateLinkListOnTextChanged(this,&this->PrevInputText,&local_38);
      pFVar2 = FText::FromString(&local_28,&local_38);
      SetInputText(this,pFVar2);
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
        FVar3.Data = local_38.Data.AllocatorInstance.Data;
      }
    }
    else {
      UDS_ChattingManager::SetInputChattingType(this_00,local_res18[0]);
      UpdateLinkListOnTextChanged(this,&this->PrevInputText,&local_48);
      pFVar2 = FText::FromString(&local_28,&local_48);
      SetInputText(this,pFVar2);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      FVar3.Data = local_48.Data.AllocatorInstance.Data;
      local_38.Data.ArrayNum = local_48.Data.ArrayNum;
    }
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(&this->PrevInputText,(wchar_t *)FVar3.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// OnChangeInputText @ 14bd6f0d0

void __thiscall
UDS_VM_Chat_Input::OnChangeInputText(UDS_VM_Chat_Input *this,FDS_TextCommittedEventField *param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  FString *pFVar2;
  UDS_ChatEvent *pUVar3;
  longlong lVar4;
  FString local_18;
  
  pFVar2 = FText::ToString(&param_1->NewText);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (pFVar2->Data).ArrayNum;
  lVar4 = (longlong)local_18.Data.ArrayNum;
  _Src = (pFVar2->Data).AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  bVar1 = ::FString::EndsWith(&local_18,L"\r\n",2,IgnoreCase);
  if (bVar1) {
    OnCommitInputText(this,&local_18);
  }
  else {
    OnChangeInputText(this,&local_18);
    if (this->InputChattingType == Whisper) {
      pUVar3 = UDS_ChatEvent::GetEvent();
      if (pUVar3 != (UDS_ChatEvent *)0x0) {
        bVar1 = IsShowRecentWhispers(this);
        FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
                  (&pUVar3->OnChatPopup,Chat_RecentWhispers,bVar1);
      }
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnChangedChatMode @ 14bd6fda0

void __thiscall UDS_VM_Chat_Input::OnChangedChatMode(UDS_VM_Chat_Input *this,EDS_ChatMode param_1)

{
  bool bVar1;
  UDS_ChatEvent *pUVar2;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::InputVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InputVisibility.FieldName;
  if (param_1 == Viewer) {
    if (this->InputVisibility != Collapsed) {
      this->InputVisibility = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      return;
    }
  }
  else if (((param_1 == Simple) || (param_1 == Normal)) || (param_1 == Extended)) {
    if (this->InputVisibility != SelfHitTestInvisible) {
      this->InputVisibility = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    (this->TextCursorEvent).TextLine = 0;
    (this->TextCursorEvent).TextOffset = -1;
    local_10 = FFieldNotificationClassDescriptor::TextCursorEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::TextCursorEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    pUVar2 = UDS_ChatEvent::GetEvent();
    if (pUVar2 != (UDS_ChatEvent *)0x0) {
      bVar1 = IsShowRecentWhispers(this);
      FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
                (&pUVar2->OnChatPopup,Chat_RecentWhispers,bVar1);
    }
  }
  return;
}

// OnChangedChatOption @ 14bd6ff30

void __thiscall UDS_VM_Chat_Input::OnChangedChatOption(UDS_VM_Chat_Input *this)

{
  UDS_ChattingManager *this_00;
  FLinearColor *pFVar1;
  FLinearColor local_18;
  
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 != (UDS_ChattingManager *)0x0) {
    pFVar1 = UDS_ChattingManager::GetChattingColor(this_00,&local_18,this->InputChattingType);
    SetInputTextColor(this,pFVar1);
  }
  return;
}

// OnChatPopup @ 14bd70c20

void __thiscall
UDS_VM_Chat_Input::OnChatPopup
          (UDS_VM_Chat_Input *this,EDS_ViewModelTemplateKey param_1,bool param_2)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::InputSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InputSwitcherIndex.FieldName;
  if (param_1 == Chat_RecentWhispers) {
    if (param_2) {
      if (this->InputSwitcherIndex != 1) {
        this->InputSwitcherIndex = 1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      local_10 = FFieldNotificationClassDescriptor::bIsSendEnabled.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::bIsSendEnabled.FieldName;
      if (this->bIsSendEnabled == false) {
        return;
      }
      this->bIsSendEnabled = false;
    }
    else {
      if (this->InputSwitcherIndex != 0) {
        this->InputSwitcherIndex = 0;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      local_10 = FFieldNotificationClassDescriptor::bIsSendEnabled.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::bIsSendEnabled.FieldName;
      if (this->bIsSendEnabled == true) {
        return;
      }
      this->bIsSendEnabled = true;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnClickCommitWhisper @ 14bd72740

void __thiscall
UDS_VM_Chat_Input::OnClickCommitWhisper(UDS_VM_Chat_Input *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  FString *pFVar2;
  UDS_ChatEvent *pUVar3;
  FName local_58;
  int local_50;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ParseWhisperNickname(this,&local_38,&local_48);
  if ((local_38.Data.ArrayNum < 2) && (local_48.Data.ArrayNum < 2)) {
    pFVar2 = FText::ToString(&this->InputText);
    ::FString::TrimStartAndEnd(pFVar2,&local_18);
    if (1 < local_18.Data.ArrayNum) {
      pFVar2 = FText::ToString(&this->InputText);
      ::FString::ConcatFC(&local_28,pFVar2,L" ");
      OnChangeInputText(this,&local_28);
      (this->TextCursorEvent).TextLine = 0;
      (this->TextCursorEvent).TextOffset = -1;
      local_50 = FFieldNotificationClassDescriptor::TextCursorEvent.BitNumber;
      local_58 = FFieldNotificationClassDescriptor::TextCursorEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (this->InputChattingType == Whisper) {
    pUVar3 = UDS_ChatEvent::GetEvent();
    if (pUVar3 != (UDS_ChatEvent *)0x0) {
      bVar1 = IsShowRecentWhispers(this);
      FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
                (&pUVar3->OnChatPopup,Chat_RecentWhispers,bVar1);
      FDS_EventDelegate<enum_EDS_ChattingType_const_>::Broadcast
                (&pUVar3->OnChangeInputChattingType,this->InputChattingType);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// OnClickSendChat @ 14bd74610

void __thiscall
UDS_VM_Chat_Input::OnClickSendChat(UDS_VM_Chat_Input *this,FDS_ButtonEventField *param_1)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(&this->InputText);
  OnCommitInputText(this,pFVar1);
  return;
}

// OnCommitInputText @ 14bd76500

void __thiscall UDS_VM_Chat_Input::OnCommitInputText(UDS_VM_Chat_Input *this,FString *param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FText *pFVar9;
  UDS_ChatEvent *pUVar10;
  uint uVar11;
  longlong lVar12;
  FString local_48;
  FDestructionSentinel local_38;
  
  ::FString::TrimStartAndEnd(param_1,&local_48);
  ::FString::ReplaceInline(&local_48,L"\r\n",L"",IgnoreCase);
  pFVar9 = FText::GetEmpty();
  SetInputText(this,pFVar9);
  if (local_48.Data.ArrayNum < 2) {
    pUVar10 = UDS_ChatEvent::GetEvent();
    if (pUVar10 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast(&pUVar10->OnChangedChatMode,Viewer);
    }
  }
  else {
    OnSendChatMessage(this,&local_48);
    pUVar10 = UDS_ChatEvent::GetEvent();
    if (pUVar10 != (UDS_ChatEvent *)0x0) {
      this_00 = &pUVar10->OnCommitInputText;
      bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar5) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_38);
        puVar1 = &(pUVar10->OnCommitInputText).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar5 = false;
        uVar11 = *(int *)&(pUVar10->OnCommitInputText).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar11) {
          lVar12 = (longlong)(int)uVar11 << 4;
          bVar5 = false;
          do {
            uVar8 = 0;
            if ((int)uVar11 < *(int *)&(pUVar10->OnCommitInputText).Delegate.field_0x10) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar2 = *(longlong *)&(pUVar10->OnCommitInputText).Delegate.field_0x8;
            if (((*(int *)(lVar2 + 8 + lVar12) == 0) ||
                (plVar3 = *(longlong **)(lVar2 + lVar12), plVar3 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
              bVar5 = true;
            }
            lVar12 = lVar12 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        puVar1 = &(pUVar10->OnCommitInputText).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar5) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_38.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
        }
      }
      if (this->InputChattingType == Whisper) {
        bVar5 = IsShowRecentWhispers(this);
        FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
                  (&pUVar10->OnChatPopup,Chat_RecentWhispers,bVar5);
      }
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// OnCommitInputText @ 14bd76710

void __thiscall
UDS_VM_Chat_Input::OnCommitInputText(UDS_VM_Chat_Input *this,FDS_TextCommittedEventField *param_1)

{
  int *piVar1;
  int iVar2;
  FDS_ChatLinkData *pFVar3;
  FString *pFVar4;
  FText *pFVar5;
  
  if (param_1->CommitType == OnEnter) {
    pFVar4 = FText::ToString(&param_1->NewText);
    OnCommitInputText(this,pFVar4);
    return;
  }
  if (param_1->CommitType == OnCleared) {
    pFVar5 = FText::GetEmpty();
    SetInputText(this,pFVar5);
    pFVar3 = (FDS_ChatLinkData *)(this->ChatLinkList).AllocatorInstance.Data;
    piVar1 = &(this->ChatLinkList).ArrayMax;
    iVar2 = (this->ChatLinkList).ArrayNum;
    if (-1 < (this->ChatLinkList).ArrayMax) {
      DestructItems<FDS_ChatLinkData,int>(pFVar3,iVar2);
      (this->ChatLinkList).ArrayNum = 0;
      return;
    }
    DestructItems<FDS_ChatLinkData,int>(pFVar3,iVar2);
    (this->ChatLinkList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->ChatLinkList).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// OnInput_SendMessage @ 14bd7a380

void __thiscall
UDS_VM_Chat_Input::OnInput_SendMessage
          (UDS_VM_Chat_Input *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  UDS_ChatEvent *pUVar1;
  FString *pFVar2;
  
  if ((param_2 == Started) && (pUVar1 = UDS_ChatEvent::GetEvent(), pUVar1 != (UDS_ChatEvent *)0x0))
  {
    pFVar2 = FText::ToString(&this->InputText);
    OnCommitInputText(this,pFVar2);
  }
  return;
}

// OnInsertLinkText @ 14bd7a500

void __thiscall
UDS_VM_Chat_Input::OnInsertLinkText(UDS_VM_Chat_Input *this,FDS_ChatLinkData *param_1)

{
  FName local_18;
  int local_10;
  
  InsertLinkTextAtCursor(this,&param_1->LinkText,&param_1->FullLinkText);
  (this->TextCursorEvent).TextLine = 0;
  (this->TextCursorEvent).TextOffset = -1;
  local_10 = FFieldNotificationClassDescriptor::TextCursorEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextCursorEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSelectedMacro @ 14bd7d990

void __thiscall UDS_VM_Chat_Input::OnSelectedMacro(UDS_VM_Chat_Input *this,FString *param_1)

{
  FString *pFVar1;
  FName local_28;
  int local_20;
  FString local_18;
  
  pFVar1 = FText::ToString(&this->InputText);
  ::FString::ConcatFF(&local_18,pFVar1,param_1);
  OnChangeInputText(this,&local_18);
  (this->TextCursorEvent).TextLine = 0;
  (this->TextCursorEvent).TextOffset = -1;
  local_20 = FFieldNotificationClassDescriptor::TextCursorEvent.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::TextCursorEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnSelectedWhisper @ 14bd7dbf0

void __thiscall UDS_VM_Chat_Input::OnSelectedWhisper(UDS_VM_Chat_Input *this,FString *param_1)

{
  FName FVar1;
  int iVar2;
  FString *pFVar3;
  bool bVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ParseWhisperNickname(this,&local_38,&local_28);
  iVar2 = (param_1->Data).ArrayNum;
  if (local_38.Data.ArrayNum == iVar2) {
    if (local_38.Data.ArrayNum < 2) goto LAB_14bd7dd65;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar4 = iVar2 == 0;
  }
  else {
    bVar4 = local_38.Data.ArrayNum + iVar2 == 1;
  }
  if (!bVar4) {
    pFVar3 = FText::ToString(&this->InputText);
    ::FString::ConcatFC(&local_48,param_1,L" ");
    ::FString::ConcatFF(&local_18,&local_48,pFVar3);
    if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    OnChangeInputText(this,&local_18);
    (this->TextCursorEvent).TextLine = 0;
    (this->TextCursorEvent).TextOffset = -1;
    local_48.Data.ArrayNum = FFieldNotificationClassDescriptor::TextCursorEvent.BitNumber;
    local_48.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::TextCursorEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    iVar2 = FFieldNotificationClassDescriptor::InputSwitcherIndex.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::InputSwitcherIndex.FieldName;
    if (this->InputSwitcherIndex != 0) {
      this->InputSwitcherIndex = 0;
      local_48.Data.ArrayNum = iVar2;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    iVar2 = FFieldNotificationClassDescriptor::bIsSendEnabled.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::bIsSendEnabled.FieldName;
    if (this->bIsSendEnabled != true) {
      this->bIsSendEnabled = true;
      local_48.Data.ArrayNum = iVar2;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
LAB_14bd7dd65:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// OnSendChatMessage @ 14bd7de10

void __thiscall UDS_VM_Chat_Input::OnSendChatMessage(UDS_VM_Chat_Input *this,FString *param_1)

{
  int *piVar1;
  TArray<FDS_ChatLinkData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FDS_ChatLinkData *pFVar4;
  UDS_ChattingManager *this_00;
  bool bVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  EDS_CommandType local_res10 [8];
  UDS_ChattingManager *local_res18;
  FString local_58;
  FString local_48;
  
  if ((param_1->Data).ArrayNum < 2) {
    return;
  }
  local_res18 = UDS_ChattingManager::GetInst();
  if (local_res18 == (UDS_ChattingManager *)0x0) {
    return;
  }
  iVar8 = 0;
  pTVar2 = &this->ChatLinkList;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  iVar10 = (this->ChatLinkList).ArrayNum;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pFVar3 = pFVar7 + (longlong)iVar10 * 0x28;
  while( true ) {
    if ((this->ChatLinkList).ArrayNum != iVar10) {
      `TCheckedPointerIterator<FDS_ChatLinkData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    this_00 = local_res18;
    if (pFVar7 == pFVar3) break;
    if (iVar8 < *(int *)(pFVar7 + 0x20)) {
      pFVar6 = ::FString::Mid(param_1,&local_48,iVar8,*(int *)(pFVar7 + 0x20) - iVar8);
      iVar8 = (pFVar6->Data).ArrayNum;
      iVar9 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar9);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    iVar8 = *(int *)(pFVar7 + 0x18) + -1;
    if (*(int *)(pFVar7 + 0x18) == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_58,*(wchar_t **)(pFVar7 + 0x10),iVar8);
    iVar8 = *(int *)(pFVar7 + 0x24) + *(int *)(pFVar7 + 0x20);
    pFVar7 = pFVar7 + 0x28;
  }
  iVar10 = (param_1->Data).ArrayNum;
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = 0;
  }
  if (iVar8 < iVar9) {
    ::FString::RightChop(param_1,&local_48,iVar8);
    iVar10 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar10);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  piVar1 = &(this->ChatLinkList).ArrayMax;
  pFVar4 = (FDS_ChatLinkData *)(pTVar2->AllocatorInstance).Data;
  iVar10 = (this->ChatLinkList).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FDS_ChatLinkData,int>(pFVar4,iVar10);
    (this->ChatLinkList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FDS_ChatLinkData,int>(pFVar4,iVar10);
    (this->ChatLinkList).ArrayNum = 0;
  }
  bVar5 = ::FString::StartsWith(&local_58,L"/",1,IgnoreCase);
  if (bVar5) {
    local_res18 = (UDS_ChattingManager *)((ulonglong)local_res18 & 0xffffffffffffff00);
    local_res10[0] = None;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    UDS_ChattingManager::ParseChattingCommand
              (this_00,&local_58,(EDS_ChattingType *)&local_res18,local_res10,&local_48);
    if (local_res10[0] != None) {
      UDS_ChattingManager::OnExtraCommand(this_00,local_res10[0],&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      goto LAB_14bd7e03b;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  UDS_ChattingManager::SendChattingMessage(this_00,this->InputChattingType,&local_58);
LAB_14bd7e03b:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// OnSetViewModel @ 14bd817b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_Input::OnSetViewModel
          (UDS_VM_Chat_Input *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FString *pFVar1;
  int *piVar2;
  EDS_ChattingType EVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  UDS_VM_Chat_InputFocus *pUVar6;
  code *pcVar7;
  FName FVar8;
  int iVar9;
  FDS_ViewModelContext_ChatInputFocus *pFVar10;
  bool bVar11;
  UDS_LogManager *pUVar12;
  FText *pFVar13;
  undefined1 auStackY_228 [32];
  TSharedPtr<FDS_ViewModelContext_Chat,1> local_1f8;
  FName local_1e8;
  int local_1e0;
  FName local_1d8;
  int local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  TSharedPtr<FDS_ViewModelContext_ChatInputFocus,1> local_1b8;
  TSharedPtr<FDS_ViewModelContext_ChatInputFocus,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext_ChatInputFocus,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_188.Object = param_1->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Chat>(&local_1f8,&local_188);
  if (local_1f8.Object == (FDS_ViewModelContext_Chat *)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 != (UDS_LogManager *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)local_1f8.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_Input::OnSetViewModel",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar12,1,Warning,local_148.Ptr,0x1d,L"chatContext.IsValid() == false");
      if ((FDS_ViewModelContext_Chat *)local_148._padding_ != (FDS_ViewModelContext_Chat *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if (local_1f8.Object == (FDS_ViewModelContext_Chat *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    this->ChattingTypeFlag = (local_1f8.Object)->ChattingTypeFlag;
    EVar3 = (local_1f8.Object)->InputChattingType;
    this->InputChattingType = EVar3;
    this->SubTabIndex = (local_1f8.Object)->SubTabIndex;
    OnChangeInputChattingType(this,EVar3);
    pFVar13 = FText::GetEmpty();
    SetInputText(this,pFVar13);
    pFVar1 = &this->PrevInputText;
    local_1c8 = 0;
    local_1c0 = 0;
    if (pFVar1 != (FString *)&local_1c8) {
      pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->PrevInputText).Data.ArrayNum = 0;
      (this->PrevInputText).Data.ArrayMax = 0;
    }
    DestructItems<FDS_ChatLinkData,int>
              ((FDS_ChatLinkData *)(this->ChatLinkList).AllocatorInstance.Data,
               (this->ChatLinkList).ArrayNum);
    piVar2 = &(this->ChatLinkList).ArrayMax;
    (this->ChatLinkList).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->ChatLinkList).AllocatorInstance,0,piVar2);
    }
    iVar9 = FFieldNotificationClassDescriptor::InputSwitcherIndex.BitNumber;
    FVar8 = FFieldNotificationClassDescriptor::InputSwitcherIndex.FieldName;
    if (this->InputSwitcherIndex != 0) {
      this->InputSwitcherIndex = 0;
      local_1e0 = iVar9;
      local_1e8 = FVar8;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
    }
    iVar9 = FFieldNotificationClassDescriptor::bIsSendEnabled.BitNumber;
    FVar8 = FFieldNotificationClassDescriptor::bIsSendEnabled.FieldName;
    if (this->bIsSendEnabled != true) {
      this->bIsSendEnabled = true;
      local_1d0 = iVar9;
      local_1d8 = FVar8;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
    }
    if ((this->VM_SimpleModeInputFocus).field0_0x0.DebugPtr != (UDS_VM_Chat_InputFocus *)0x0) {
      MakeContext<FDS_ViewModelContext_ChatInputFocus>(&local_1b8);
      pFVar10 = local_1b8.Object;
      if (local_1b8.Object == (FDS_ViewModelContext_ChatInputFocus *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar10->ChatMode = Simple;
      pUVar6 = (this->VM_SimpleModeInputFocus).field0_0x0.DebugPtr;
      local_178.Object = (FDS_ViewModelContext *)local_1b8.Object;
      local_178.SharedReferenceCount.ReferenceController =
           local_1b8.SharedReferenceCount.ReferenceController;
      if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar6,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
    }
    if ((this->VM_NormalModeInputFocus).field0_0x0.DebugPtr != (UDS_VM_Chat_InputFocus *)0x0) {
      MakeContext<FDS_ViewModelContext_ChatInputFocus>(&local_1a8);
      pFVar10 = local_1a8.Object;
      if (local_1a8.Object == (FDS_ViewModelContext_ChatInputFocus *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar10->ChatMode = Normal;
      pUVar6 = (this->VM_NormalModeInputFocus).field0_0x0.DebugPtr;
      local_168.Object = (FDS_ViewModelContext *)local_1a8.Object;
      local_168.SharedReferenceCount.ReferenceController =
           local_1a8.SharedReferenceCount.ReferenceController;
      if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar6,&local_168);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
    }
    if ((this->VM_ExtendedModeInputFocus).field0_0x0.DebugPtr != (UDS_VM_Chat_InputFocus *)0x0) {
      MakeContext<FDS_ViewModelContext_ChatInputFocus>(&local_198);
      pFVar10 = local_198.Object;
      if (local_198.Object == (FDS_ViewModelContext_ChatInputFocus *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      local_158.Object = (FDS_ViewModelContext *)local_198.Object;
      local_158.SharedReferenceCount.ReferenceController =
           local_198.SharedReferenceCount.ReferenceController;
      pFVar10->ChatMode = Extended;
      pUVar6 = (this->VM_ExtendedModeInputFocus).field0_0x0.DebugPtr;
      if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar6,&local_158);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ParseWhisperNickname @ 14bd844f0

void __thiscall
UDS_VM_Chat_Input::ParseWhisperNickname(UDS_VM_Chat_Input *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  int iVar6;
  longlong lVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (this->InputChattingType == Whisper) {
    pFVar3 = FText::ToString(&this->InputText);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    lVar7 = (longlong)local_48.Data.ArrayNum;
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (local_48.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,pFVar1,lVar7 * 2);
    }
    iVar2 = ::FString::Find(&local_48,L" ",1,IgnoreCase,FromStart,-1);
    if (1 < iVar2 + 1U) {
      iVar4 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      if (iVar2 != iVar4) {
        if (iVar2 < iVar4) {
          iVar4 = iVar2;
        }
        iVar6 = 0;
        if (0 < iVar4) {
          iVar6 = iVar4;
        }
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar5.Data = local_48.Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_38,(wchar_t *)FVar5.Data,iVar6);
        if (param_1 != &local_38) {
          pFVar1 = (param_1->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
          (param_1->Data).ArrayNum = local_38.Data.ArrayNum;
          (param_1->Data).ArrayMax = local_38.Data.ArrayMax;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        ::FString::RightChop(&local_48,&local_28,iVar2 + 1);
        if (param_2 != &local_28) {
          pFVar1 = (param_2->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_2->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
          (param_2->Data).ArrayNum = local_28.Data.ArrayNum;
          (param_2->Data).ArrayMax = local_28.Data.ArrayMax;
          local_28.Data.ArrayNum = 0;
          local_28.Data.ArrayMax = 0;
          local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetInputHintText @ 14bd895e0

void __thiscall UDS_VM_Chat_Input::SetInputHintText(UDS_VM_Chat_Input *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::InputHintText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::InputHintText.FieldName;
  FDS_Text::operator=(&this->InputHintText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetInputSwitcherIndex @ 14bd89640

void __thiscall UDS_VM_Chat_Input::SetInputSwitcherIndex(UDS_VM_Chat_Input *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::InputSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InputSwitcherIndex.FieldName;
  if (this->InputSwitcherIndex != param_1) {
    this->InputSwitcherIndex = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetInputText @ 14bd89690

void __thiscall UDS_VM_Chat_Input::SetInputText(UDS_VM_Chat_Input *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FName local_18;
  int local_10;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->InputText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->InputText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->InputText).Flags = param_1->Flags;
  local_10 = FFieldNotificationClassDescriptor::InputText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InputText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetInputTextColor @ 14bd89720

void __thiscall UDS_VM_Chat_Input::SetInputTextColor(UDS_VM_Chat_Input *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->InputTextColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->InputTextColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->InputTextColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->InputTextColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::InputTextColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::InputTextColor.FieldName;
    (this->InputTextColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->InputTextColor).field0_0x0._s_0.G = fVar1;
    (this->InputTextColor).field0_0x0._s_0.B = fVar2;
    (this->InputTextColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetInputVisibility @ 14bd897a0

void __thiscall
UDS_VM_Chat_Input::SetInputVisibility(UDS_VM_Chat_Input *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::InputVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InputVisibility.FieldName;
  if (this->InputVisibility != param_1) {
    this->InputVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSendEnabled @ 14bd8a820

void __thiscall UDS_VM_Chat_Input::SetSendEnabled(UDS_VM_Chat_Input *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSendEnabled.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSendEnabled.FieldName;
  if (this->bIsSendEnabled != param_1) {
    this->bIsSendEnabled = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bd8c1f0

void __thiscall UDS_VM_Chat_Input::UnbindModel(UDS_VM_Chat_Input *this)

{
  UDS_ChatEvent *pUVar1;
  UDS_InputEvent *pUVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeInputChattingType,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatMode,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnInsertLinkText,this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChatPopup,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedWhisper,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedMacro,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatOption,
               this);
  }
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_Chat_Input>(&pUVar2->OnInputEvent,this);
  }
  return;
}

// UpdateLinkListOnTextChanged @ 14bd91c30

void __thiscall
UDS_VM_Chat_Input::UpdateLinkListOnTextChanged
          (UDS_VM_Chat_Input *this,FString *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  FString *pFVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_res10 [8];
  FString *local_res18;
  int local_res20;
  
  iVar12 = (param_1->Data).ArrayNum;
  local_res20 = 0;
  iVar7 = iVar12 + -1;
  iVar11 = 0;
  iVar6 = (param_2->Data).ArrayNum;
  if (iVar12 == 0) {
    iVar7 = 0;
  }
  iVar12 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar12 = 0;
  }
  local_res18 = param_2;
  iVar6 = local_res20;
  if (0 < iVar7) {
    lVar8 = 0;
    do {
      iVar6 = iVar11;
      if (iVar12 <= lVar8) break;
      if (iVar11 < 0) {
code_r0x00014bd91cdb:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar10 = (param_1->Data).AllocatorInstance.Data + lVar8 * 2;
        if (-1 < iVar11) goto LAB_14bd91d0c;
LAB_14bd91d1d:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        iVar1 = (param_1->Data).ArrayNum;
        iVar5 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar5 = 0;
        }
        if (iVar5 <= iVar11) goto code_r0x00014bd91cdb;
        pFVar10 = (param_1->Data).AllocatorInstance.Data + lVar8 * 2;
LAB_14bd91d0c:
        iVar1 = (param_2->Data).ArrayNum;
        iVar5 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar5 = 0;
        }
        if (iVar5 <= iVar11) goto LAB_14bd91d1d;
      }
      if (*(short *)pFVar10 != *(short *)((param_2->Data).AllocatorInstance.Data + lVar8 * 2))
      break;
      iVar11 = iVar11 + 1;
      lVar8 = lVar8 + 1;
      iVar6 = iVar11;
    } while (lVar8 < iVar7);
  }
  local_res20 = iVar6;
  pFVar3 = local_res18;
  iVar7 = iVar7 + -1;
  lVar13 = (longlong)local_res20;
  lVar8 = (longlong)iVar7;
  iVar12 = iVar12 + -1;
  if (lVar13 <= lVar8) {
    lVar14 = (longlong)iVar12;
    do {
      if (lVar14 < lVar13) break;
      if (iVar7 < 0) {
code_r0x00014bd91dde:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        iVar11 = (param_1->Data).ArrayNum;
        iVar6 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar6 = 0;
        }
        if (iVar6 <= iVar7) goto code_r0x00014bd91dde;
      }
      pFVar10 = (param_1->Data).AllocatorInstance.Data;
      if (iVar12 < 0) {
code_r0x00014bd91e36:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        iVar11 = (pFVar3->Data).ArrayNum;
        iVar6 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar6 = 0;
        }
        if (iVar6 <= iVar12) goto code_r0x00014bd91e36;
      }
      if (*(short *)(pFVar10 + lVar8 * 2) !=
          *(short *)((pFVar3->Data).AllocatorInstance.Data + lVar14 * 2)) break;
      iVar7 = iVar7 + -1;
      lVar8 = lVar8 + -1;
      iVar12 = iVar12 + -1;
      lVar14 = lVar14 + -1;
    } while (lVar13 <= lVar8);
  }
  iVar6 = local_res20;
  iVar12 = (iVar12 - local_res20) + 1;
  iVar7 = (iVar7 - local_res20) + 1;
  if (0 < iVar7) {
    HandleTextDelete(this,local_res20,iVar7);
  }
  if (0 < iVar12) {
    iVar7 = (this->ChatLinkList).ArrayNum;
    pFVar9 = (this->ChatLinkList).AllocatorInstance.Data;
    pFVar10 = pFVar9 + (longlong)iVar7 * 0x28;
    while( true ) {
      if ((this->ChatLinkList).ArrayNum != iVar7) {
        `TCheckedPointerIterator<FDS_ChatLinkData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar9 == pFVar10) break;
      if (iVar6 <= *(int *)(pFVar9 + 0x20)) {
        *(int *)(pFVar9 + 0x20) = *(int *)(pFVar9 + 0x20) + iVar12;
      }
      pFVar9 = pFVar9 + 0x28;
    }
  }
  return;
}

