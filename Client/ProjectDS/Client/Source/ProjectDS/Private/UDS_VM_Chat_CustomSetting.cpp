// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetTitleText_WrapperImpl @ 14b606ee0

void __cdecl UDS_VM_Chat_CustomSetting::SetTitleText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickOk_WrapperImpl @ 14b606ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_CustomSetting::SetClickOk_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar3;
  FDS_ChatCustomFilter *pFVar4;
  undefined1 auStackY_3f8 [32];
  TSharedPtr<FDS_ChatCustomData,1> TStack_3b8;
  FName FStack_3a8;
  int iStack_3a0;
  FDS_ChatCustomData FStack_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  this = UDS_ChattingManager::GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_378._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_378,"UDS_VM_Chat_CustomSetting::OnClickOk",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_378.Ptr,0x4d,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)TStack_378._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)TStack_378._padding_);
      }
    }
  }
  else if (*(longlong *)((longlong)param_1 + 0x250) == 0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_258,"UDS_VM_Chat_CustomSetting::OnClickOk",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,TStack_258.Ptr,0x53,L"ChatCustomFilter.IsValid() == false");
      if ((void *)TStack_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_258._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetCustomData(this,&TStack_3b8,*(int *)((longlong)param_1 + 0x248));
    if (TStack_3b8.Object == (FDS_ChatCustomData *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_Chat_CustomSetting::OnClickOk",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,TStack_138.Ptr,0x5a,
                   L"chatCustomData.IsValid() == false  (ChatCustomIndex : %d)");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
    }
    else {
      if ((TStack_3b8.Object == (FDS_ChatCustomData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FStack_398.ChatFilterIndex = (TStack_3b8.Object)->ChatFilterIndex;
      FStack_398._4_4_ = *(undefined4 *)&(TStack_3b8.Object)->field_0x4;
      FStack_398.ChatFilterFlags = (TStack_3b8.Object)->ChatFilterFlags;
      FStack_398.bIsBookmark = (TStack_3b8.Object)->bIsBookmark;
      FStack_398._17_7_ = *(undefined7 *)&(TStack_3b8.Object)->field_0x11;
      pFVar4 = TSharedPtr<FDS_ChatCustomFilter,1>::operator->
                         ((TSharedPtr<FDS_ChatCustomFilter,1> *)((longlong)param_1 + 0x250));
      FStack_398.ChatFilterFlags = pFVar4->ChatTypeFlags;
      UDS_ChattingManager::RequestSetCustomInfo
                (this,*(int *)((longlong)param_1 + 0x248),&FStack_398);
      UDS_ChattingManager::SetChattingTabType(this,Custom,*(int *)((longlong)param_1 + 0x248));
      *(undefined1 *)((longlong)param_1 + 0x140) = 1;
      iStack_3a0 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
      FStack_3a8 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_3a8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_3b8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetClickCancel_WrapperImpl @ 14b606f00

void __cdecl UDS_VM_Chat_CustomSetting::SetClickCancel_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetbIsEnabledOK_WrapperImpl @ 14b606f10

void __cdecl UDS_VM_Chat_CustomSetting::SetbIsEnabledOK_WrapperImpl(void *param_1,void *param_2)

{
  SetIsEnabledOK(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b606f20

UClass * __cdecl UDS_VM_Chat_CustomSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_CustomSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_CustomSetting",
               &Z_Registration_Info_UClass_UDS_VM_Chat_CustomSetting.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_CustomSetting,0x268,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_Chat_CustomSetting>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_CustomSetting>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_CustomSetting.InnerSingleton;
}

// UDS_VM_Chat_CustomSetting @ 14b60b3e0

UDS_VM_Chat_CustomSetting * __thiscall
UDS_VM_Chat_CustomSetting::UDS_VM_Chat_CustomSetting
          (UDS_VM_Chat_CustomSetting *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ChatCustomIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_CustomSetting__6B_;
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
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ClickOk)._padding_ = '\0';
  (this->ClickOk).bIsCustomSelected = false;
  (this->ClickOk).bIsLacked = false;
  (this->ClickOk).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickOk).Delegate = 0;
  *(undefined8 *)&(this->ClickOk).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOk).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->VM_CloseInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  this->bIsEnabledOK = false;
  (this->FixedText_Filter).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Filter).StringEnumTableNameID.Number = 0;
  (this->FixedText_Filter).DateTime.Ticks = 0;
  (this->FixedText_Filter).TimeSpan.Ticks = 0;
  (this->FixedText_Filter).TimeExpressionType = None;
  (this->FixedText_Filter).IsExpression = false;
  (this->FixedText_Filter).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Filter).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Filter).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Filter).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Filter).FormatArgs.ArrayNum = 0;
  (this->FixedText_Filter).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_OK).DateTime.Ticks = 0;
  (this->FixedText_Btn_OK).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_OK).TimeExpressionType = None;
  (this->FixedText_Btn_OK).IsExpression = false;
  (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  (this->ChatCustomFilter).Object = (FDS_ChatCustomFilter *)0x0;
  (this->ChatCustomFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsCreateCustom = false;
  (this->TitleText).StringTableType = None;
  (this->FixedText_Filter).StringTableType = StringUi;
  (this->FixedText_Filter).StringTableID = 0xc5cd;
  (this->FixedText_Btn_OK).StringTableType = StringUi;
  (this->FixedText_Btn_OK).StringTableID = 0x65;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  return this;
}

// UDS_VM_Chat_CustomSetting @ 14b60b5d0

UDS_VM_Chat_CustomSetting * __thiscall
UDS_VM_Chat_CustomSetting::UDS_VM_Chat_CustomSetting
          (UDS_VM_Chat_CustomSetting *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ChatCustomIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_CustomSetting__6B_;
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
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ClickOk)._padding_ = '\0';
  (this->ClickOk).bIsCustomSelected = false;
  (this->ClickOk).bIsLacked = false;
  (this->ClickOk).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickOk).Delegate = 0;
  *(undefined8 *)&(this->ClickOk).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOk).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->VM_CloseInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  this->bIsEnabledOK = false;
  (this->FixedText_Filter).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Filter).StringEnumTableNameID.Number = 0;
  (this->FixedText_Filter).DateTime.Ticks = 0;
  (this->FixedText_Filter).TimeSpan.Ticks = 0;
  (this->FixedText_Filter).TimeExpressionType = None;
  (this->FixedText_Filter).IsExpression = false;
  (this->FixedText_Filter).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Filter).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Filter).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Filter).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Filter).FormatArgs.ArrayNum = 0;
  (this->FixedText_Filter).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_OK).DateTime.Ticks = 0;
  (this->FixedText_Btn_OK).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_OK).TimeExpressionType = None;
  (this->FixedText_Btn_OK).IsExpression = false;
  (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  (this->ChatCustomFilter).Object = (FDS_ChatCustomFilter *)0x0;
  (this->ChatCustomFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsCreateCustom = false;
  (this->TitleText).StringTableType = None;
  (this->FixedText_Filter).StringTableType = StringUi;
  (this->FixedText_Filter).StringTableID = 0xc5cd;
  (this->FixedText_Btn_OK).StringTableType = StringUi;
  (this->FixedText_Btn_OK).StringTableID = 0x65;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  return this;
}

// ~UDS_VM_Chat_CustomSetting @ 14b60c460

void __thiscall
UDS_VM_Chat_CustomSetting::~UDS_VM_Chat_CustomSetting(UDS_VM_Chat_CustomSetting *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_CustomSetting__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChatCustomFilter).SharedReferenceCount.ReferenceController);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_OK).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Filter).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Filter).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Filter).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Filter).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancel).Delegate);
  pvVar2 = *(void **)&(this->ClickCancel).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancel).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickOk).Delegate);
  pvVar2 = *(void **)&(this->ClickOk).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickOk).Delegate);
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b60dd60

IClassDescriptor * __thiscall
UDS_VM_Chat_CustomSetting::GetFieldNotificationDescriptor(UDS_VM_Chat_CustomSetting *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_CustomSetting::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b60e680

UClass * __cdecl UDS_VM_Chat_CustomSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_CustomSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_CustomSetting",
               &Z_Registration_Info_UClass_UDS_VM_Chat_CustomSetting.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_CustomSetting,0x268,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_Chat_CustomSetting>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_CustomSetting>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_CustomSetting.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_CustomSetting @ 14b60e940

void __cdecl UDS_VM_Chat_CustomSetting::StaticRegisterNativesUDS_VM_Chat_CustomSetting(void)

{
  return;
}

// BindModel @ 14bd47720

void __thiscall UDS_VM_Chat_CustomSetting::BindModel(UDS_VM_Chat_CustomSetting *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedCustomFilter,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_CustomSetting>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedCustomFilter,(UDS_VM_Chat_CustomSetting *)&stack0x00000010,
               (pmf_f5014e91 *)this);
  }
  return;
}

// InitViewModel @ 14bd69690

void __thiscall UDS_VM_Chat_CustomSetting::InitViewModel(UDS_VM_Chat_CustomSetting *this)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  bool bVar3;
  UDS_VM_InputKey *pUVar4;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_CloseInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
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
    (this->VM_CloseInputKey).field0_0x0.DebugPtr = pUVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnChangedCustomFilter @ 14bd701c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_CustomSetting::OnChangedCustomFilter(UDS_VM_Chat_CustomSetting *this)

{
  FDS_ChatCustomFilter *pFVar1;
  UDS_LogManager *pUVar2;
  bool bVar3;
  undefined1 auStackY_178 [32];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_140 = FFieldNotificationClassDescriptor::bIsEnabledOK.BitNumber;
  local_148 = FFieldNotificationClassDescriptor::bIsEnabledOK.FieldName;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar1 = (this->ChatCustomFilter).Object;
  if (pFVar1 == (FDS_ChatCustomFilter *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_CustomSetting::OnChangedCustomFilter",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xb1,L"ChatCustomFilter.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    bVar3 = pFVar1->ChatTypeFlags != 0;
    if (this->bIsEnabledOK != bVar3) {
      this->bIsEnabledOK = bVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    }
  }
  return;
}

// OnClickCancel @ 14bd724a0

void __thiscall
UDS_VM_Chat_CustomSetting::OnClickCancel
          (UDS_VM_Chat_CustomSetting *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickOk @ 14bd73890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_CustomSetting::OnClickOk(UDS_VM_Chat_CustomSetting *this,FDS_ButtonEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar3;
  FDS_ChatCustomFilter *pFVar4;
  undefined1 auStackY_3f8 [32];
  TSharedPtr<FDS_ChatCustomData,1> local_3b8;
  FName local_3a8;
  int local_3a0;
  FDS_ChatCustomData local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_378._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"UDS_VM_Chat_CustomSetting::OnClickOk",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_378.Ptr,0x4d,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)local_378._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
  }
  else if ((this->ChatCustomFilter).Object == (FDS_ChatCustomFilter *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_VM_Chat_CustomSetting::OnClickOk",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_258.Ptr,0x53,L"ChatCustomFilter.IsValid() == false");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetCustomData(this_00,&local_3b8,this->ChatCustomIndex);
    if (local_3b8.Object == (FDS_ChatCustomData *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_Chat_CustomSetting::OnClickOk",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x5a,
                   L"chatCustomData.IsValid() == false  (ChatCustomIndex : %d)");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      if ((local_3b8.Object == (FDS_ChatCustomData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_398.ChatFilterIndex = (local_3b8.Object)->ChatFilterIndex;
      local_398._4_4_ = *(undefined4 *)&(local_3b8.Object)->field_0x4;
      local_398.ChatFilterFlags = (local_3b8.Object)->ChatFilterFlags;
      local_398.bIsBookmark = (local_3b8.Object)->bIsBookmark;
      local_398._17_7_ = *(undefined7 *)&(local_3b8.Object)->field_0x11;
      pFVar4 = TSharedPtr<FDS_ChatCustomFilter,1>::operator->(&this->ChatCustomFilter);
      local_398.ChatFilterFlags = pFVar4->ChatTypeFlags;
      UDS_ChattingManager::RequestSetCustomInfo(this_00,this->ChatCustomIndex,&local_398);
      UDS_ChattingManager::SetChattingTabType(this_00,Custom,this->ChatCustomIndex);
      (this->CloseMySelf).bIsActivate = true;
      local_3a0 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
      local_3a8 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3a8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3b8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnSetViewModel @ 14bd7ff60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_CustomSetting::OnSetViewModel
          (UDS_VM_Chat_CustomSetting *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatCustomFilter *pFVar2;
  code *pcVar3;
  FDS_ViewModelContext_ChatCustom *pFVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext_ChatCustom,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  FDS_ChatCustomFilter *local_148;
  TReferenceControllerBase<1> *pTStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ChatCustom>(&local_168,&local_158);
  pFVar4 = local_168.Object;
  if (local_168.Object == (FDS_ViewModelContext_ChatCustom *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_CustomSetting::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_138.Ptr,0x16,L"chatCustomContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_168.Object == (FDS_ViewModelContext_ChatCustom *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->ChatCustomIndex = pFVar4->ChatCustomIndex;
    pTVar1 = (pFVar4->ChatCustomFilter).SharedReferenceCount.ReferenceController;
    pFVar2 = (pFVar4->ChatCustomFilter).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148 = (this->ChatCustomFilter).Object;
    pTStack_140 = (this->ChatCustomFilter).SharedReferenceCount.ReferenceController;
    (this->ChatCustomFilter).Object = pFVar2;
    (this->ChatCustomFilter).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_140)
    ;
    if (local_168.Object == (FDS_ViewModelContext_ChatCustom *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->bIsCreateCustom = (local_168.Object)->bIsCreateCustom;
    UpdateCustomSetting(this);
    OnChangedCustomFilter(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsEnabledOK @ 14bd89ab0

void __thiscall
UDS_VM_Chat_CustomSetting::SetIsEnabledOK(UDS_VM_Chat_CustomSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsEnabledOK.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsEnabledOK.FieldName;
  if (this->bIsEnabledOK != param_1) {
    this->bIsEnabledOK = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTitleText @ 14bd8acc0

void __thiscall
UDS_VM_Chat_CustomSetting::SetTitleText(UDS_VM_Chat_CustomSetting *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=(&this->TitleText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bd8be30

void __thiscall UDS_VM_Chat_CustomSetting::UnbindModel(UDS_VM_Chat_CustomSetting *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedCustomFilter,
               this);
    return;
  }
  return;
}

// UpdateCustomSetting @ 14bd8f200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_CustomSetting::UpdateCustomSetting(UDS_VM_Chat_CustomSetting *this)

{
  FDS_EntryBindingEventField *this_00;
  FInstancedStruct *this_01;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ChatCustomFilter *pFVar3;
  code *pcVar4;
  FObjectPtr_u_0 FVar5;
  FName FVar6;
  FDS_ViewModelContext_ChatCustomFilterGroup *pFVar7;
  bool bVar8;
  int iVar9;
  FObjectPtr_u_0 *pFVar10;
  FDS_Int32StringFormatArg *pFVar11;
  UDS_ChattingManager *pUVar12;
  UDS_LogManager *pUVar13;
  UDS_UserObjectListItem *pUVar14;
  ForAnyElementType FVar15;
  FName *pFVar16;
  undefined1 auStackY_418 [32];
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_3e8;
  TSharedPtr<FDS_ViewModelContext_ChatCustomFilterGroup,1> local_3d8;
  TSharedPtr<FDS_ViewModelContext_ChatCustomFilterGroup,1> local_3c8;
  UDS_UserObjectListItem *local_3b8;
  UDS_UserObjectListItem *local_3b0;
  FName local_3a8;
  int local_3a0;
  FName local_398;
  int local_390;
  FName local_388;
  int local_380;
  FName local_378;
  int local_370;
  FName local_368;
  int local_360;
  FDS_Text local_358;
  FDS_Text local_308;
  FDS_ChatCustomFilter *local_2b8;
  TReferenceControllerBase<1> *pTStack_2b0;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  FDS_ChatCustomFilter *local_298;
  TReferenceControllerBase<1> *pTStack_290;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_418;
  if (this->bIsCreateCustom == true) {
    local_358.StringTableType = None;
    local_358.StringTableID = 0;
    local_358.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_358.StringEnumTableNameID.Number = 0;
    local_358.DateTime.Ticks = 0;
    local_358.TimeSpan.Ticks = 0;
    local_358.TimeExpressionType = None;
    local_358.IsExpression = false;
    local_358.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_358.UniqueString.Data.ArrayNum = 0;
    local_358.UniqueString.Data.ArrayMax = 0;
    local_358.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_358.FormatArgs.ArrayNum = 0;
    local_358.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_358,StringUi,0xc399);
    iVar1 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::TitleText.FieldName;
    FDS_Text::operator=(&this->TitleText,&local_358);
    local_3a8 = FVar6;
    local_3a0 = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3a8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_358.FormatArgs.AllocatorInstance.Data,
               local_358.FormatArgs.ArrayNum);
    FVar15.Data = local_358.UniqueString.Data.AllocatorInstance.Data;
    if ((FDS_TextFormatArg *)local_358.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_358.FormatArgs.AllocatorInstance.Data);
      FVar15.Data = local_358.UniqueString.Data.AllocatorInstance.Data;
    }
  }
  else {
    iVar1 = this->ChatCustomIndex;
    local_308.StringTableType = None;
    local_308.StringTableID = 0;
    local_308.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_308.StringEnumTableNameID.Number = 0;
    local_308.DateTime.Ticks = 0;
    local_308.TimeSpan.Ticks = 0;
    local_308.TimeExpressionType = None;
    local_308.IsExpression = false;
    local_308.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.UniqueString.Data.ArrayNum = 0;
    local_308.UniqueString.Data.ArrayMax = 0;
    local_308.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.FormatArgs.ArrayNum = 0;
    local_308.FormatArgs.ArrayMax = 0;
    local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e8.ArrayNum = 0;
    local_3e8.ArrayMax = 0;
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_3e8.AllocatorInstance,&local_3e8.ArrayMax);
    local_3e8.ArrayNum = iVar9 + 1;
    this_01 = (FInstancedStruct *)(local_3e8.AllocatorInstance.Data + (longlong)iVar9 * 0x28);
    FInstancedStruct::FInstancedStruct(this_01);
    pFVar10 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar5 = pFVar10[1];
    this_01[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar10;
    this_01[1].StructMemory = (uchar *)FVar5;
    this_01[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar10[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_01);
    pFVar11 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_01);
    if (pFVar11 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar11->Value = iVar1 + 1;
    }
    FDS_Text::SetTextFormatFromStringTable(&local_308,StringUi,0xc5dc,&local_3e8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_3e8.AllocatorInstance.Data,local_3e8.ArrayNum);
    if ((FDS_TextFormatArg *)local_3e8.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_3e8.AllocatorInstance.Data);
    }
    iVar1 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::TitleText.FieldName;
    FDS_Text::operator=(&this->TitleText,&local_308);
    local_398 = FVar6;
    local_390 = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_398);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_308.FormatArgs.AllocatorInstance.Data,
               local_308.FormatArgs.ArrayNum);
    FVar15.Data = local_308.UniqueString.Data.AllocatorInstance.Data;
    if ((FDS_TextFormatArg *)local_308.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_308.FormatArgs.AllocatorInstance.Data);
      FVar15.Data = local_308.UniqueString.Data.AllocatorInstance.Data;
    }
  }
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  this_00 = &this->EntryBindingEventField;
  FDS_EntryBindingEventField::Reset(this_00);
  pUVar12 = UDS_ChattingManager::GetInst();
  if (pUVar12 == (UDS_ChattingManager *)0x0) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 != (UDS_LogManager *)0x0) {
      pUVar13 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_Chat_CustomSetting::UpdateCustomSetting",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar13,1,Warning,local_278.Ptr,0x84,L"chattingManager == nullptr");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
    pFVar16 = &local_388;
    local_388 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
    local_380 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  }
  else if ((this->ChatCustomFilter).Object == (FDS_ChatCustomFilter *)0x0) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 != (UDS_LogManager *)0x0) {
      pUVar13 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_Chat_CustomSetting::UpdateCustomSetting",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar13,1,Warning,local_158.Ptr,0x8b,L"ChatCustomFilter.IsValid() == false");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    pFVar16 = &local_378;
    local_378 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
    local_370 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  }
  else {
    pUVar14 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar14 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    MakeContext<FDS_ViewModelContext_ChatCustomFilterGroup>(&local_3d8);
    pFVar7 = local_3d8.Object;
    if ((local_3d8.Object == (FDS_ViewModelContext_ChatCustomFilterGroup *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)&pFVar7->_padding_ = 0x12f;
    pTVar2 = (this->ChatCustomFilter).SharedReferenceCount.ReferenceController;
    pFVar3 = (this->ChatCustomFilter).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2b8 = (pFVar7->ChatCustomFilter).Object;
    pTStack_2b0 = (pFVar7->ChatCustomFilter).SharedReferenceCount.ReferenceController;
    (pFVar7->ChatCustomFilter).Object = pFVar3;
    (pFVar7->ChatCustomFilter).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2b0)
    ;
    pFVar7 = local_3d8.Object;
    if ((local_3d8.Object == (FDS_ViewModelContext_ChatCustomFilterGroup *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_2a8.Object = (FDS_ViewModelContext *)local_3d8.Object;
    local_2a8.SharedReferenceCount.ReferenceController =
         local_3d8.SharedReferenceCount.ReferenceController;
    pFVar7->bIsNormalTypeGroup = true;
    if (local_3d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(pUVar14,&local_2a8);
    local_3b8 = pUVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar14 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_3b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3d8.SharedReferenceCount.ReferenceController);
    pUVar14 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar14 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    MakeContext<FDS_ViewModelContext_ChatCustomFilterGroup>(&local_3c8);
    pFVar7 = local_3c8.Object;
    if ((local_3c8.Object == (FDS_ViewModelContext_ChatCustomFilterGroup *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)&pFVar7->_padding_ = 0x12f;
    pTVar2 = (this->ChatCustomFilter).SharedReferenceCount.ReferenceController;
    pFVar3 = (this->ChatCustomFilter).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_298 = (pFVar7->ChatCustomFilter).Object;
    pTStack_290 = (pFVar7->ChatCustomFilter).SharedReferenceCount.ReferenceController;
    (pFVar7->ChatCustomFilter).Object = pFVar3;
    (pFVar7->ChatCustomFilter).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_290)
    ;
    pFVar7 = local_3c8.Object;
    if ((local_3c8.Object == (FDS_ViewModelContext_ChatCustomFilterGroup *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_288.Object = (FDS_ViewModelContext *)local_3c8.Object;
    local_288.SharedReferenceCount.ReferenceController =
         local_3c8.SharedReferenceCount.ReferenceController;
    pFVar7->bIsSystemTypeGroup = true;
    if (local_3c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(pUVar14,&local_288);
    local_3b0 = pUVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar14 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_3b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c8.SharedReferenceCount.ReferenceController);
    pFVar16 = &local_368;
    local_368 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
    local_360 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar16);
  return;
}

