// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 44

// SetbIsMyChat_WrapperImpl @ 14b6100d0

void __cdecl UDS_VM_Chat_MessageSlot::SetbIsMyChat_WrapperImpl(void *param_1,void *param_2)

{
  SetIsMyChat(param_1,*(bool *)param_2);
  return;
}

// SetChatTypeIconID_WrapperImpl @ 14b6100e0

void __cdecl UDS_VM_Chat_MessageSlot::SetChatTypeIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetChatTypeIconID(param_1,*(int *)param_2);
  return;
}

// SetChatTypeIconVisibility_WrapperImpl @ 14b6100f0

void __cdecl
UDS_VM_Chat_MessageSlot::SetChatTypeIconVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetChatTypeIconVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetChatTypeColor_WrapperImpl @ 14b610100

void __cdecl UDS_VM_Chat_MessageSlot::SetChatTypeColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)((longlong)param_2 + 8);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 0xb0) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xb8) = uVar3;
  iStack_10 = FFieldNotificationClassDescriptor::ChatTypeColor.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ChatTypeColor.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetNickname_WrapperImpl @ 14b610110

void __cdecl UDS_VM_Chat_MessageSlot::SetNickname_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Nickname.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Nickname.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xc0),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xc0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xc0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 200) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetNicknameVisibility_WrapperImpl @ 14b610120

void __cdecl UDS_VM_Chat_MessageSlot::SetNicknameVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetNicknameVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetChatMessage_WrapperImpl @ 14b610130

void __cdecl UDS_VM_Chat_MessageSlot::SetChatMessage_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::ChatMessage.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ChatMessage.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xd8),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xd8);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xd8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xe0) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetChatTimeVisibility_WrapperImpl @ 14b610140

void __cdecl UDS_VM_Chat_MessageSlot::SetChatTimeVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetChatTimeVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetPortraitIconID_WrapperImpl @ 14b610150

void __cdecl UDS_VM_Chat_MessageSlot::SetPortraitIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetPortraitIconID(param_1,*(int *)param_2);
  return;
}

// SetPortraitVisibility_WrapperImpl @ 14b610160

void __cdecl UDS_VM_Chat_MessageSlot::SetPortraitVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetPortraitVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetChatTranslateVisibility_WrapperImpl @ 14b610170

void __cdecl
UDS_VM_Chat_MessageSlot::SetChatTranslateVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetChatTranslateVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetClickChatTranslate_WrapperImpl @ 14b610180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_MessageSlot::SetClickChatTranslate_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  FName FStack_148;
  int iStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_ChattingManager::GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_MessageSlot::OnClickChatTranslate",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x7f,L"chattingManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::RequestTranslateMessage
              (this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)
                    *(FWeakObjectPtr *)((longlong)param_1 + 0x16c));
    iStack_140 = FFieldNotificationClassDescriptor::ChatTranslateVisibility.BitNumber;
    FStack_148 = FFieldNotificationClassDescriptor::ChatTranslateVisibility.FieldName;
    if (*(char *)((longlong)param_1 + 0x141) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x141) = 1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_148);
    }
  }
  return;
}

// SetFontStyleID_WrapperImpl @ 14b610190

void __cdecl UDS_VM_Chat_MessageSlot::SetFontStyleID_WrapperImpl(void *param_1,void *param_2)

{
  SetFontStyleID(param_1,*(int *)param_2);
  return;
}

// StaticClass @ 14b6101a0

UClass * __cdecl UDS_VM_Chat_MessageSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_MessageSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_MessageSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_MessageSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_MessageSlot,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_MessageSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_MessageSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_MessageSlot.InnerSingleton;
}

// UDS_VM_Chat_MessageSlot @ 14b616460

UDS_VM_Chat_MessageSlot * __thiscall
UDS_VM_Chat_MessageSlot::UDS_VM_Chat_MessageSlot
          (UDS_VM_Chat_MessageSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->bIsMyChat = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_MessageSlot__6B_;
  FText::FText(&this->Nickname);
  FText::FText(&this->ChatMessage);
  (this->ChatTime).StringTableType = None;
  (this->ChatTime).StringTableID = 0;
  (this->ChatTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatTime).StringEnumTableNameID.Number = 0;
  (this->ChatTime).DateTime.Ticks = 0;
  (this->ChatTime).TimeSpan.Ticks = 0;
  (this->ChatTime).TimeExpressionType = None;
  (this->ChatTime).IsExpression = false;
  (this->ChatTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatTime).UniqueString.Data.ArrayNum = 0;
  (this->ChatTime).UniqueString.Data.ArrayMax = 0;
  (this->ChatTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatTime).FormatArgs.ArrayNum = 0;
  (this->ChatTime).FormatArgs.ArrayMax = 0;
  (this->ClickChatTranslate)._padding_ = '\0';
  (this->ClickChatTranslate).bIsCustomSelected = false;
  (this->ClickChatTranslate).bIsLacked = false;
  (this->ClickChatTranslate).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChatTranslate).Delegate = 0;
  *(undefined8 *)&(this->ClickChatTranslate).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatTranslate).Delegate.field_0x10 = 0;
  this->FontStyleID = 0;
  (this->ChattingData).WeakPtr.ObjectIndex = 0;
  (this->ChattingData).WeakPtr.ObjectSerialNumber = 0;
  return this;
}

// UDS_VM_Chat_MessageSlot @ 14b616530

UDS_VM_Chat_MessageSlot * __thiscall
UDS_VM_Chat_MessageSlot::UDS_VM_Chat_MessageSlot
          (UDS_VM_Chat_MessageSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->bIsMyChat = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_MessageSlot__6B_;
  FText::FText(&this->Nickname);
  FText::FText(&this->ChatMessage);
  (this->ChatTime).StringTableType = None;
  (this->ChatTime).StringTableID = 0;
  (this->ChatTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatTime).StringEnumTableNameID.Number = 0;
  (this->ChatTime).DateTime.Ticks = 0;
  (this->ChatTime).TimeSpan.Ticks = 0;
  (this->ChatTime).TimeExpressionType = None;
  (this->ChatTime).IsExpression = false;
  (this->ChatTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatTime).UniqueString.Data.ArrayNum = 0;
  (this->ChatTime).UniqueString.Data.ArrayMax = 0;
  (this->ChatTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatTime).FormatArgs.ArrayNum = 0;
  (this->ChatTime).FormatArgs.ArrayMax = 0;
  (this->ClickChatTranslate)._padding_ = '\0';
  (this->ClickChatTranslate).bIsCustomSelected = false;
  (this->ClickChatTranslate).bIsLacked = false;
  (this->ClickChatTranslate).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChatTranslate).Delegate = 0;
  *(undefined8 *)&(this->ClickChatTranslate).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatTranslate).Delegate.field_0x10 = 0;
  this->FontStyleID = 0;
  (this->ChattingData).WeakPtr.ObjectIndex = 0;
  (this->ChattingData).WeakPtr.ObjectSerialNumber = 0;
  return this;
}

// ~UDS_VM_Chat_MessageSlot @ 14b617890

void __thiscall UDS_VM_Chat_MessageSlot::~UDS_VM_Chat_MessageSlot(UDS_VM_Chat_MessageSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_MessageSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickChatTranslate).Delegate);
  pvVar1 = *(void **)&(this->ClickChatTranslate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickChatTranslate).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChatTime).FormatArgs.AllocatorInstance.Data,
             (this->ChatTime).FormatArgs.ArrayNum);
  pFVar2 = (this->ChatTime).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ChatTime).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->ChatMessage).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->Nickname).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b619470

IClassDescriptor * __thiscall
UDS_VM_Chat_MessageSlot::GetFieldNotificationDescriptor(UDS_VM_Chat_MessageSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_MessageSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b619f80

UClass * __cdecl UDS_VM_Chat_MessageSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_MessageSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_MessageSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_MessageSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_MessageSlot,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_MessageSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_MessageSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_MessageSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_MessageSlot @ 14b61a290

void __cdecl UDS_VM_Chat_MessageSlot::StaticRegisterNativesUDS_VM_Chat_MessageSlot(void)

{
  return;
}

// BindModel @ 14bdb0580

void __thiscall UDS_VM_Chat_MessageSlot::BindModel(UDS_VM_Chat_MessageSlot *this)

{
  TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_ChatEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar3;
  UObject *pUVar4;
  longlong local_res10 [3];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    this_00 = &this->ChattingData;
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_&>
                       ((TMapBase<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar2->OnTranslateChatMessage).Subscriptions,
                        (this->ChattingData).WeakPtr.ObjectSerialNumber ^
                        (this_00->WeakPtr).ObjectIndex,this_00);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_MessageSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               pTVar3,(UDS_VM_Chat_MessageSlot *)local_res10,(pmf_baf44617 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChangedChatOption,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_MessageSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedChatOption,(UDS_VM_Chat_MessageSlot *)local_res10,
               (pmf_baf44617 *)this);
    bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if ((bVar1) && (pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr), pUVar4[2].field_0x10 == '\n'))
    {
      pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_res10[0] = *(longlong *)&pUVar4[2].field_0x18;
      if (0 < local_res10[0]) {
        pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                 TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
                 ::FindOrAddImpl<__int64_const_&>
                           ((TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
                             *)&(pUVar2->OnRefreshUserInfo).Subscriptions,
                            (int)((ulonglong)local_res10[0] >> 0x20) * 0x17 + (int)local_res10[0],
                            local_res10);
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
        AddUObject<UDS_VM_Chat_MessageSlot>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                    *)pTVar3,(UDS_VM_Chat_MessageSlot *)(local_res10 + 1),(pmf_baf44617 *)this);
      }
    }
  }
  return;
}

// OnChangedChatOption @ 14bdca640

void __thiscall UDS_VM_Chat_MessageSlot::OnChangedChatOption(UDS_VM_Chat_MessageSlot *this)

{
  UpdateFontStyle(this);
  UpdateChatMessageSlot(this);
  UpdateVisibility(this);
  return;
}

// OnClickChatTranslate @ 14bdcbcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_MessageSlot::OnClickChatTranslate
          (UDS_VM_Chat_MessageSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_MessageSlot::OnClickChatTranslate",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x7f,L"chattingManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::RequestTranslateMessage
              (this_00,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)(this->ChattingData).WeakPtr
              );
    local_140 = FFieldNotificationClassDescriptor::ChatTranslateVisibility.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::ChatTranslateVisibility.FieldName;
    if (this->ChatTranslateVisibility != Collapsed) {
      this->ChatTranslateVisibility = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    }
  }
  return;
}

// OnRefreshUserInfo @ 14bdd1650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_MessageSlot::OnRefreshUserInfo(UDS_VM_Chat_MessageSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_ChattingManager *this_00;
  UObject *pUVar4;
  undefined1 auStackY_3b8 [32];
  TSharedPtr<FDS_ChatUserInfo,1> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  bVar2 = FWeakObjectPtr::IsValid(&(this->ChattingData).WeakPtr);
  if (bVar2) {
    this_00 = UDS_ChattingManager::GetInst();
    if (this_00 == (UDS_ChattingManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"UDS_VM_Chat_MessageSlot::OnRefreshUserInfo",0x2a,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_258.Ptr,0x148,L"chattingManager == nullptr")
        ;
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
      }
    }
    else {
      pUVar4 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
      UDS_ChattingManager::GetChatUserInfo(this_00,&local_388,*(long64 *)&pUVar4[2].field_0x18);
      if (local_388.Object == (FDS_ChatUserInfo *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_VM_Chat_MessageSlot::OnRefreshUserInfo",0x2a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x150,L"chatUserInfo.IsValid() == false");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        if ((local_388.Object == (FDS_ChatUserInfo *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        bVar2 = FDS_ChatUserInfo::IsValidNickname(local_388.Object);
        if (bVar2) {
          pUVar4 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
          if ((local_388.Object == (FDS_ChatUserInfo *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          ::FString::operator=((FString *)&pUVar4[2].field_0x20,&(local_388.Object)->Nickname);
          UpdateChatMessageSlot(this);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_388.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"UDS_VM_Chat_MessageSlot::OnRefreshUserInfo",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_378.Ptr,0x141,L"ChattingData.IsValid() == false");
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bdd5d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_MessageSlot::OnSetViewModel
          (UDS_VM_Chat_MessageSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_ChatMessage,1> local_158;
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
  SafeCast<FDS_ViewModelContext_ChatMessage>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_ChatMessage *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_MessageSlot::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x16,L"chatMessageContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_ChatMessage *)0x0) {
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
    (this->ChattingData).WeakPtr = ((local_158.Object)->ChattingData).WeakPtr;
    UpdateFontStyle(this);
    UpdateChatMessageSlot(this);
    UpdateVisibility(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTranslateChatMessage @ 14bddefa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_MessageSlot::OnTranslateChatMessage(UDS_VM_Chat_MessageSlot *this)

{
  int iVar1;
  TObjectPtr<UDS_M_ChatOption>_u_0 TVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_ChattingManager *pUVar5;
  UObject *pUVar6;
  FText *pFVar7;
  FString *pFVar8;
  undefined1 auStackY_1a8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  TObjectPtr<UDS_M_ChatOption>_u_0 TStack_178;
  int iStack_170;
  FWeakObjectPtr FStack_168;
  FText FStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar3 = FWeakObjectPtr::IsValid(&(this->ChattingData).WeakPtr);
  if (bVar3) {
    pUVar5 = UDS_ChattingManager::GetInst();
    if (pUVar5 == (UDS_ChattingManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      TStack_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_148,"UDS_VM_Chat_MessageSlot::UpdateChatMessage",0x2a,Yes);
      pwVar10 = L"chattingManager == nullptr";
      uVar9 = 0x117;
    }
    else {
      TVar2 = (TObjectPtr<UDS_M_ChatOption>_u_0)(pUVar5->ChatOption).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar2.DebugPtr != (UDS_M_ChatOption *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar2.DebugPtr != (UDS_M_ChatOption *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
      }
      FStack_168.ObjectIndex = 0;
      FStack_168.ObjectSerialNumber = 0;
      TStack_178 = TVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.DebugPtr != (UDS_M_ChatOption *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      FWeakObjectPtr::operator=(&FStack_168,(FObjectPtr)&TStack_178);
      bVar3 = FWeakObjectPtr::IsValid(&FStack_168);
      if (bVar3) {
        pUVar6 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
        iVar1 = *(int *)(pUVar6 + 4);
        pUVar6 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
        pFVar8 = (FString *)&pUVar6[3].field_0x20;
        if (iVar1 < 2) {
          pFVar8 = (FString *)&pUVar6[3].field_0x10;
        }
        pUVar6 = FWeakObjectPtr::Get(&FStack_168);
        if (pUVar6[1].field_0x7 == '\x01') {
          DS_Util::ApplyBanWord((FString *)&TStack_178.ObjectPtr,pFVar8);
          pFVar7 = FText::FromString(&FStack_160,(FString *)&TStack_178.ObjectPtr);
          SetChatMessage(this,pFVar7);
          if (FStack_160.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_160.TextData.Reference + 0x10))();
          }
          if (TStack_178.DebugPtr != (UDS_M_ChatOption *)0x0) {
            FMemory::Free(TStack_178.DebugPtr);
          }
        }
        else {
          pFVar7 = FText::FromString(&FStack_160,pFVar8);
          SetChatMessage(this,pFVar7);
          if (FStack_160.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_160.TextData.Reference + 0x10))();
          }
        }
        if ((iVar1 < 2) &&
           (pUVar6 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr),
           iStack_170 = FFieldNotificationClassDescriptor::ChatTranslateVisibility.BitNumber,
           TStack_178 = (TObjectPtr<UDS_M_ChatOption>_u_0)
                        FFieldNotificationClassDescriptor::ChatTranslateVisibility.FieldName,
           pUVar6[5].field_0x2 != '\x01')) {
          if (this->ChatTranslateVisibility == SelfHitTestInvisible) {
            return;
          }
          this->ChatTranslateVisibility = SelfHitTestInvisible;
        }
        else {
          iStack_170 = FFieldNotificationClassDescriptor::ChatTranslateVisibility.BitNumber;
          TStack_178 = (TObjectPtr<UDS_M_ChatOption>_u_0)
                       FFieldNotificationClassDescriptor::ChatTranslateVisibility.FieldName;
          if (this->ChatTranslateVisibility == Collapsed) {
            return;
          }
          this->ChatTranslateVisibility = Collapsed;
        }
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_178);
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      TStack_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_148,"UDS_VM_Chat_MessageSlot::UpdateChatMessage",0x2a,Yes);
      pwVar10 = L"chatOption.IsValid() == false";
      uVar9 = 0x11e;
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_Chat_MessageSlot::UpdateChatMessage",0x2a,Yes);
    pwVar10 = L"ChattingData.IsValid() == false";
    uVar9 = 0x110;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_148.Ptr,uVar9,pwVar10);
  if ((void *)TStack_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_148._padding_);
  }
  return;
}

// SetChatMessage @ 14bde3aa0

void __thiscall
UDS_VM_Chat_MessageSlot::SetChatMessage(UDS_VM_Chat_MessageSlot *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::ChatMessage.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ChatMessage.FieldName;
  bVar5 = FText::IdenticalTo(&this->ChatMessage,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->ChatMessage).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->ChatMessage).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->ChatMessage).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetChatTime @ 14bde3dc0

void __thiscall UDS_VM_Chat_MessageSlot::SetChatTime(UDS_VM_Chat_MessageSlot *this,double param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatTimeVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatTimeVisibility.FieldName;
  if (0.0 < param_1) {
    FDS_Text::SetTextFromUnixTime(&this->ChatTime,param_1,HourMin,false);
    local_10 = FFieldNotificationClassDescriptor::ChatTime.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ChatTime.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    local_10 = FFieldNotificationClassDescriptor::ChatTimeVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ChatTimeVisibility.FieldName;
    if (this->ChatTimeVisibility != SelfHitTestInvisible) {
      this->ChatTimeVisibility = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  else if (this->ChatTimeVisibility != Collapsed) {
    this->ChatTimeVisibility = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    return;
  }
  return;
}

// SetChatTimeVisibility @ 14bde3ea0

void __thiscall
UDS_VM_Chat_MessageSlot::SetChatTimeVisibility
          (UDS_VM_Chat_MessageSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatTimeVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatTimeVisibility.FieldName;
  if (this->ChatTimeVisibility != param_1) {
    this->ChatTimeVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatTranslateVisibility @ 14bde3ef0

void __thiscall
UDS_VM_Chat_MessageSlot::SetChatTranslateVisibility
          (UDS_VM_Chat_MessageSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatTranslateVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatTranslateVisibility.FieldName;
  if (this->ChatTranslateVisibility != param_1) {
    this->ChatTranslateVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatTypeColor @ 14bde3f40

void __thiscall
UDS_VM_Chat_MessageSlot::SetChatTypeColor(UDS_VM_Chat_MessageSlot *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  fVar1 = (param_1->field0_0x0)._s_0.G;
  fVar2 = (param_1->field0_0x0)._s_0.B;
  fVar3 = (param_1->field0_0x0)._s_0.A;
  (this->ChatTypeColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
  (this->ChatTypeColor).field0_0x0._s_0.G = fVar1;
  (this->ChatTypeColor).field0_0x0._s_0.B = fVar2;
  (this->ChatTypeColor).field0_0x0._s_0.A = fVar3;
  local_10 = FFieldNotificationClassDescriptor::ChatTypeColor.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatTypeColor.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetChatTypeIconID @ 14bde3f80

void __thiscall
UDS_VM_Chat_MessageSlot::SetChatTypeIconID(UDS_VM_Chat_MessageSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatTypeIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatTypeIconID.FieldName;
  if (this->ChatTypeIconID != param_1) {
    this->ChatTypeIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatTypeIconVisibility @ 14bde3fd0

void __thiscall
UDS_VM_Chat_MessageSlot::SetChatTypeIconVisibility
          (UDS_VM_Chat_MessageSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatTypeIconVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatTypeIconVisibility.FieldName;
  if (this->ChatTypeIconVisibility != param_1) {
    this->ChatTypeIconVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetFontStyleID @ 14bde64f0

void __thiscall UDS_VM_Chat_MessageSlot::SetFontStyleID(UDS_VM_Chat_MessageSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::FontStyleID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::FontStyleID.FieldName;
  if (this->FontStyleID != param_1) {
    this->FontStyleID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsMyChat @ 14bde6900

void __thiscall UDS_VM_Chat_MessageSlot::SetIsMyChat(UDS_VM_Chat_MessageSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsMyChat.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsMyChat.FieldName;
  if (this->bIsMyChat != param_1) {
    this->bIsMyChat = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetNickname @ 14bde7fe0

void __thiscall UDS_VM_Chat_MessageSlot::SetNickname(UDS_VM_Chat_MessageSlot *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Nickname.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Nickname.FieldName;
  bVar5 = FText::IdenticalTo(&this->Nickname,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->Nickname).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Nickname).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Nickname).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetNicknameVisibility @ 14bde80a0

void __thiscall
UDS_VM_Chat_MessageSlot::SetNicknameVisibility
          (UDS_VM_Chat_MessageSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::NicknameVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NicknameVisibility.FieldName;
  if (this->NicknameVisibility != param_1) {
    this->NicknameVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPortraitIconID @ 14bde8600

void __thiscall
UDS_VM_Chat_MessageSlot::SetPortraitIconID(UDS_VM_Chat_MessageSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::PortraitIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PortraitIconID.FieldName;
  if (this->PortraitIconID != param_1) {
    this->PortraitIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPortraitVisibility @ 14bde8650

void __thiscall
UDS_VM_Chat_MessageSlot::SetPortraitVisibility
          (UDS_VM_Chat_MessageSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::PortraitVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PortraitVisibility.FieldName;
  if (this->PortraitVisibility != param_1) {
    this->PortraitVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bdec110

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Chat_MessageSlot::UnbindModel(UDS_VM_Chat_MessageSlot *this)

{
  UDS_LanguageManager *pUVar1;
  UDS_ChatEvent *pUVar2;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    FDS_FilteredEventDelegate<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_>::
    Remove<UDS_VM_Chat_MessageSlot>(&pUVar2->OnTranslateChatMessage,this);
    FDS_FilteredEventDelegate<__int64_const_>::Remove<UDS_VM_Chat_MessageSlot>
              (&pUVar2->OnRefreshUserInfo,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChangedChatOption,
               this);
  }
  return;
}

// UpdateChatMessage @ 14bdee110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_MessageSlot::UpdateChatMessage(UDS_VM_Chat_MessageSlot *this)

{
  int iVar1;
  TObjectPtr<UDS_M_ChatOption>_u_0 TVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_ChattingManager *pUVar5;
  UObject *pUVar6;
  FText *pFVar7;
  FString *pFVar8;
  undefined1 auStackY_1a8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  TObjectPtr<UDS_M_ChatOption>_u_0 local_178;
  int local_170;
  FWeakObjectPtr local_168;
  FText local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar3 = FWeakObjectPtr::IsValid(&(this->ChattingData).WeakPtr);
  if (bVar3) {
    pUVar5 = UDS_ChattingManager::GetInst();
    if (pUVar5 == (UDS_ChattingManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_MessageSlot::UpdateChatMessage",0x2a,Yes);
      pwVar10 = L"chattingManager == nullptr";
      uVar9 = 0x117;
    }
    else {
      TVar2 = (TObjectPtr<UDS_M_ChatOption>_u_0)(pUVar5->ChatOption).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar2.DebugPtr != (UDS_M_ChatOption *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar2.DebugPtr != (UDS_M_ChatOption *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
      }
      local_168.ObjectIndex = 0;
      local_168.ObjectSerialNumber = 0;
      local_178 = TVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.DebugPtr != (UDS_M_ChatOption *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_178);
      bVar3 = FWeakObjectPtr::IsValid(&local_168);
      if (bVar3) {
        pUVar6 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
        iVar1 = *(int *)(pUVar6 + 4);
        pUVar6 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
        pFVar8 = (FString *)&pUVar6[3].field_0x20;
        if (iVar1 < 2) {
          pFVar8 = (FString *)&pUVar6[3].field_0x10;
        }
        pUVar6 = FWeakObjectPtr::Get(&local_168);
        if (pUVar6[1].field_0x7 == '\x01') {
          DS_Util::ApplyBanWord((FString *)&local_178.ObjectPtr,pFVar8);
          pFVar7 = FText::FromString(&local_160,(FString *)&local_178.ObjectPtr);
          SetChatMessage(this,pFVar7);
          if (local_160.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
          }
          if (local_178.DebugPtr != (UDS_M_ChatOption *)0x0) {
            FMemory::Free(local_178.DebugPtr);
          }
        }
        else {
          pFVar7 = FText::FromString(&local_160,pFVar8);
          SetChatMessage(this,pFVar7);
          if (local_160.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
          }
        }
        if ((iVar1 < 2) &&
           (pUVar6 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr),
           local_170 = FFieldNotificationClassDescriptor::ChatTranslateVisibility.BitNumber,
           local_178 = (TObjectPtr<UDS_M_ChatOption>_u_0)
                       FFieldNotificationClassDescriptor::ChatTranslateVisibility.FieldName,
           pUVar6[5].field_0x2 != '\x01')) {
          if (this->ChatTranslateVisibility == SelfHitTestInvisible) {
            return;
          }
          this->ChatTranslateVisibility = SelfHitTestInvisible;
        }
        else {
          local_170 = FFieldNotificationClassDescriptor::ChatTranslateVisibility.BitNumber;
          local_178 = (TObjectPtr<UDS_M_ChatOption>_u_0)
                      FFieldNotificationClassDescriptor::ChatTranslateVisibility.FieldName;
          if (this->ChatTranslateVisibility == Collapsed) {
            return;
          }
          this->ChatTranslateVisibility = Collapsed;
        }
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_MessageSlot::UpdateChatMessage",0x2a,Yes);
      pwVar10 = L"chatOption.IsValid() == false";
      uVar9 = 0x11e;
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_Chat_MessageSlot::UpdateChatMessage",0x2a,Yes);
    pwVar10 = L"ChattingData.IsValid() == false";
    uVar9 = 0x110;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar9,pwVar10);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// UpdateChatMessageSlot @ 14bdee450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_MessageSlot::UpdateChatMessageSlot(UDS_VM_Chat_MessageSlot *this)

{
  EDS_ChattingType EVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  UDS_ChattingManager *this_00;
  UObject *pUVar9;
  UDS_ChattingData *this_01;
  FString *pFVar10;
  FText *pFVar11;
  longlong lVar12;
  FName FVar13;
  FName FVar14;
  undefined1 auStackY_1e8 [32];
  uint uVar15;
  wchar_t *pwVar16;
  FName local_1b8;
  int local_1b0;
  undefined1 local_1a8 [8];
  FText local_1a0;
  FDS_ChatLinkData local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  bVar4 = FWeakObjectPtr::IsValid(&(this->ChattingData).WeakPtr);
  if (!bVar4) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_Chat_MessageSlot::UpdateChatMessageSlot",0x2e,Yes);
    pwVar16 = L"ChattingData.IsValid() == false";
    uVar15 = 0x90;
LAB_14bdee4dd:
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_168.Ptr,uVar15,pwVar16);
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    return;
  }
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_Chat_MessageSlot::UpdateChatMessageSlot",0x2e,Yes);
    pwVar16 = L"chattingManager == nullptr";
    uVar15 = 0x97;
    goto LAB_14bdee4dd;
  }
  pUVar9 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
  EVar1 = pUVar9[2].field_0x10;
  pUVar9 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
  bVar4 = (bool)pUVar9[5].field_0x1;
  this_01 = (UDS_ChattingData *)FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
  bVar5 = UDS_ChattingData::IsSystemMessage(this_01);
  iVar6 = FFieldNotificationClassDescriptor::bIsMyChat.BitNumber;
  FVar14 = FFieldNotificationClassDescriptor::bIsMyChat.FieldName;
  if (this->bIsMyChat != bVar4) {
    this->bIsMyChat = bVar4;
    local_1b0 = iVar6;
    local_1b8 = FVar14;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
  }
  iVar6 = UDS_ChattingManager::GetChatIconID(this_00,EVar1);
  FVar14 = FFieldNotificationClassDescriptor::ChatTypeIconID.FieldName;
  if (this->ChatTypeIconID != iVar6) {
    local_1b0 = FFieldNotificationClassDescriptor::ChatTypeIconID.BitNumber;
    this->ChatTypeIconID = iVar6;
    local_1b8 = FVar14;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
  }
  pUVar9 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
  iVar6 = FFieldNotificationClassDescriptor::NicknameVisibility.BitNumber;
  FVar14 = FFieldNotificationClassDescriptor::NicknameVisibility.FieldName;
  if ((*(int *)(pUVar9 + 3) < 2) || (bVar5)) {
    if (this->NicknameVisibility != Collapsed) {
      this->NicknameVisibility = Collapsed;
      local_1b0 = iVar6;
      local_1b8 = FVar14;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
  }
  else {
    pFVar10 = ::FString::FString((FString *)&local_1a0,(FString *)&pUVar9[2].field_0x20);
    pUVar9 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
    DS_ChatHelper::MakePlayerLinkText(&local_190,*(long64 *)&pUVar9[2].field_0x18,pFVar10);
    pFVar11 = FText::FromString(&local_1a0,&local_190.FullLinkText);
    iVar6 = FFieldNotificationClassDescriptor::Nickname.BitNumber;
    FVar14 = FFieldNotificationClassDescriptor::Nickname.FieldName;
    bVar4 = FText::IdenticalTo(&this->Nickname,pFVar11,None);
    if (!bVar4) {
      pIVar2 = (pFVar11->TextData).Reference;
      pIVar3 = (this->Nickname).TextData.Reference;
      if (pIVar3 != pIVar2) {
        (this->Nickname).TextData.Reference = pIVar2;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_1a8);
        }
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        }
      }
      (this->Nickname).Flags = pFVar11->Flags;
      local_1b8 = FVar14;
      local_1b0 = iVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
    if (local_1a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
    }
    iVar6 = FFieldNotificationClassDescriptor::NicknameVisibility.BitNumber;
    FVar14 = FFieldNotificationClassDescriptor::NicknameVisibility.FieldName;
    if (this->NicknameVisibility != SelfHitTestInvisible) {
      this->NicknameVisibility = SelfHitTestInvisible;
      local_1b0 = iVar6;
      local_1b8 = FVar14;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
    if (local_190.FullLinkText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.FullLinkText.Data.AllocatorInstance.Data);
    }
    if (local_190.LinkText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.LinkText.Data.AllocatorInstance.Data);
    }
  }
  UpdateChatMessage(this);
  pUVar9 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
  iVar7 = FFieldNotificationClassDescriptor::PortraitVisibility.BitNumber;
  FVar13 = FFieldNotificationClassDescriptor::PortraitVisibility.FieldName;
  iVar6 = FFieldNotificationClassDescriptor::PortraitIconID.BitNumber;
  FVar14 = FFieldNotificationClassDescriptor::PortraitIconID.FieldName;
  if ((pUVar9[5].field_0x1 != '\0') || (bVar5)) {
    if (this->PortraitVisibility != Collapsed) {
      this->PortraitVisibility = Collapsed;
      goto LAB_14bdee878;
    }
  }
  else {
    if (this->PortraitIconID != 0x186a1) {
      this->PortraitIconID = 0x186a1;
      local_1b0 = iVar6;
      local_1b8 = FVar14;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
    iVar7 = FFieldNotificationClassDescriptor::PortraitVisibility.BitNumber;
    FVar13 = FFieldNotificationClassDescriptor::PortraitVisibility.FieldName;
    if (this->PortraitVisibility != SelfHitTestInvisible) {
      this->PortraitVisibility = SelfHitTestInvisible;
LAB_14bdee878:
      local_1b8 = FVar13;
      local_1b0 = iVar7;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
  }
  pUVar9 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
  iVar6 = FFieldNotificationClassDescriptor::ChatTimeVisibility.BitNumber;
  FVar14 = FFieldNotificationClassDescriptor::ChatTimeVisibility.FieldName;
  if (0.0 < *(double *)&pUVar9[4].field_0x18) {
    FDS_Text::SetTextFromUnixTime(&this->ChatTime,*(double *)&pUVar9[4].field_0x18,HourMin,false);
    local_1b0 = FFieldNotificationClassDescriptor::ChatTime.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::ChatTime.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    local_1b0 = FFieldNotificationClassDescriptor::ChatTimeVisibility.BitNumber;
    FVar14 = FFieldNotificationClassDescriptor::ChatTimeVisibility.FieldName;
    if (this->ChatTimeVisibility == SelfHitTestInvisible) goto LAB_14bdee95a;
    this->ChatTimeVisibility = SelfHitTestInvisible;
    lVar12 = this->_padding_;
  }
  else {
    if (this->ChatTimeVisibility == Collapsed) goto LAB_14bdee95a;
    this->ChatTimeVisibility = Collapsed;
    local_1b0 = iVar6;
    lVar12 = this->_padding_;
  }
  local_1b8 = FVar14;
  (**(code **)(lVar12 + 0x38))(&this->_padding_,&local_1b8);
LAB_14bdee95a:
  local_1b0 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  local_1b8 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  if ((char)this->_padding_ == '\x04') {
    return;
  }
  *(undefined1 *)&this->_padding_ = 4;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
  return;
}

// UpdateFontStyle @ 14bdf14d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_MessageSlot::UpdateFontStyle(UDS_VM_Chat_MessageSlot *this)

{
  FName FVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  UDS_ChattingManager *this_00;
  UObject *pUVar8;
  FLinearColor *pFVar9;
  int iVar10;
  undefined1 auStackY_1a8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  FName local_178;
  int local_170;
  FWeakObjectPtr local_168;
  FLinearColor local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar6 = FWeakObjectPtr::IsValid(&(this->ChattingData).WeakPtr);
  if (bVar6) {
    this_00 = UDS_ChattingManager::GetInst();
    if (this_00 == (UDS_ChattingManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_MessageSlot::UpdateFontStyle",0x28,Yes);
      pwVar12 = L"chattingManager == nullptr";
      uVar11 = 0xea;
    }
    else {
      FVar1 = (FName)(this_00->ChatOption).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (FVar1 != (FName)0x0) {
          UE::GC::MarkAsReachable((UObject *)FVar1);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar1 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar1);
        }
      }
      local_168.ObjectIndex = 0;
      local_168.ObjectSerialNumber = 0;
      local_178 = FVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar1 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar1);
      }
      FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_178);
      bVar6 = FWeakObjectPtr::IsValid(&local_168);
      if (bVar6) {
        pUVar8 = FWeakObjectPtr::Get(&local_168);
        iVar5 = FFieldNotificationClassDescriptor::FontStyleID.BitNumber;
        FVar1 = FFieldNotificationClassDescriptor::FontStyleID.FieldName;
        iVar10 = (byte)pUVar8[1].field_0x8 + 8000;
        if (this->FontStyleID != iVar10) {
          this->FontStyleID = iVar10;
          local_170 = iVar5;
          local_178 = FVar1;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
        }
        pUVar8 = FWeakObjectPtr::Get(&(this->ChattingData).WeakPtr);
        pFVar9 = UDS_ChattingManager::GetChattingColor(this_00,&local_160,pUVar8[2].field_0x10);
        fVar2 = (pFVar9->field0_0x0)._s_0.G;
        fVar3 = (pFVar9->field0_0x0)._s_0.B;
        fVar4 = (pFVar9->field0_0x0)._s_0.A;
        (this->ChatTypeColor).field0_0x0._s_0.R = (pFVar9->field0_0x0)._s_0.R;
        (this->ChatTypeColor).field0_0x0._s_0.G = fVar2;
        (this->ChatTypeColor).field0_0x0._s_0.B = fVar3;
        (this->ChatTypeColor).field0_0x0._s_0.A = fVar4;
        local_170 = FFieldNotificationClassDescriptor::ChatTypeColor.BitNumber;
        local_178 = FFieldNotificationClassDescriptor::ChatTypeColor.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_MessageSlot::UpdateFontStyle",0x28,Yes);
      pwVar12 = L"chatOption.IsValid() == false";
      uVar11 = 0xf1;
    }
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,uVar11,pwVar12);
    if ((UDS_ChattingManager *)local_148._padding_ != (UDS_ChattingManager *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    return;
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar7 = UDS_LogManager::GetInst();
  local_148._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_148,"UDS_VM_Chat_MessageSlot::UpdateFontStyle",0x28,Yes);
  UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,0xe3,L"ChattingData.IsValid() == false");
  if ((void *)local_148._padding_ == (void *)0x0) {
    return;
  }
  FMemory::Free((void *)local_148._padding_);
  return;
}

// UpdateVisibility @ 14bdfa6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_MessageSlot::UpdateVisibility(UDS_VM_Chat_MessageSlot *this)

{
  FName FVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UDS_LogManager *pUVar4;
  UDS_ChattingManager *pUVar5;
  UObject *pUVar6;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158 [2];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar2 = FWeakObjectPtr::IsValid(&(this->ChattingData).WeakPtr);
  if (!bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat_MessageSlot::UpdateVisibility",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,200,L"ChattingData.IsValid() == false");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  pUVar5 = UDS_ChattingManager::GetInst();
  if (pUVar5 == (UDS_ChattingManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat_MessageSlot::UpdateVisibility",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0xcf,L"chattingManager == nullptr");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  FVar1 = (FName)(pUVar5->ChatOption).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (FVar1 != (FName)0x0) {
      UE::GC::MarkAsReachable((UObject *)FVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar1 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar1);
    }
  }
  local_158[0].ObjectIndex = 0;
  local_158[0].ObjectSerialNumber = 0;
  local_148 = FVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar1 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar1);
  }
  FWeakObjectPtr::operator=(local_158,(FObjectPtr)&local_148);
  bVar2 = FWeakObjectPtr::IsValid(local_158);
  if (!bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat_MessageSlot::UpdateVisibility",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0xd6,L"chatOption.IsValid() == false");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  if (0 < this->ChatTypeIconID) {
    pUVar6 = FWeakObjectPtr::Get(local_158);
    EVar3 = SelfHitTestInvisible;
    if (pUVar6[1].field_0x4 == '\x01') goto LAB_14bdfa8e7;
  }
  EVar3 = Collapsed;
LAB_14bdfa8e7:
  FVar1 = FFieldNotificationClassDescriptor::ChatTypeIconVisibility.FieldName;
  if (this->ChatTypeIconVisibility != EVar3) {
    local_140 = FFieldNotificationClassDescriptor::ChatTypeIconVisibility.BitNumber;
    this->ChatTypeIconVisibility = EVar3;
    local_148 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  }
  pUVar6 = FWeakObjectPtr::Get(local_158);
  local_140 = FFieldNotificationClassDescriptor::ChatTimeVisibility.BitNumber;
  local_148 = FFieldNotificationClassDescriptor::ChatTimeVisibility.FieldName;
  EVar3 = Collapsed;
  if (pUVar6[1].field_0x5 == '\x01') {
    EVar3 = SelfHitTestInvisible;
  }
  if (this->ChatTimeVisibility != EVar3) {
    this->ChatTimeVisibility = EVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  }
  return;
}

