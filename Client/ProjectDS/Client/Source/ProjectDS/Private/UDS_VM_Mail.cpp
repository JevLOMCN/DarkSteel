// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// SetDeleteMailBtn_WrapperImpl @ 14b692bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Mail::SetDeleteMailBtn_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_CommonPopupManager *this;
  UDS_LogManager *pUVar2;
  UDS_M_CommonPopup *pUVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  undefined1 auStackY_1f8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr aFStack_1c8 [2];
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  FDS_Text FStack_1a8;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  TStack_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this = UDS_CommonPopupManager::GetInst();
  if (this == (UDS_CommonPopupManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_Mail::OnClickDeleteMailBtn",0x21,Yes);
    pwVar6 = L"commonPopupMng is nullptr.";
    uVar5 = 0x65;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)aFStack_1c8,(void *)0x0);
    if (!bVar1) {
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      FStack_1a8.StringTableType = None;
      FStack_1a8.StringTableID = 0;
      FStack_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      FStack_1a8.StringEnumTableNameID.Number = 0;
      FStack_1a8.TimeExpressionType = None;
      FStack_1a8.IsExpression = false;
      FStack_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1a8.DateTime.Ticks = 0;
      FStack_1a8.TimeSpan.Ticks = 0;
      FStack_1a8.UniqueString.Data.ArrayNum = 0;
      FStack_1a8.UniqueString.Data.ArrayMax = 0;
      FStack_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1a8.FormatArgs.ArrayNum = 0;
      FStack_1a8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&FStack_1a8,StringUi,2);
      UDS_M_CommonPopup::SetTitle(pUVar3,&FStack_1a8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      FStack_1a8.StringTableType = None;
      FStack_1a8.StringTableID = 0;
      FStack_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      FStack_1a8.StringEnumTableNameID.Number = 0;
      FStack_1a8.TimeExpressionType = None;
      FStack_1a8.DateTime.Ticks = 0;
      FStack_1a8.TimeSpan.Ticks = 0;
      FStack_1a8.IsExpression = false;
      FStack_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1a8.UniqueString.Data.ArrayNum = 0;
      FStack_1a8.UniqueString.Data.ArrayMax = 0;
      FStack_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1a8.FormatArgs.ArrayNum = 0;
      FStack_1a8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&FStack_1a8,StringUi,0x27178);
      UDS_M_CommonPopup::SetMainContent(pUVar3,&FStack_1a8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x66,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      uStack_1b0._0_4_ = 0;
      pcStack_1b8 = OnDeleteMail_ClickCancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_Mail>(&TStack_158,param_1,(pmf_03e3d958 *)&pcStack_1b8);
      UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonCancel,pTVar4);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0x65,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
      pcStack_1b8 = OnDeleteMail_ClickConfirm;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_Mail>(&TStack_158,param_1,(pmf_03e3d958 *)&pcStack_1b8);
      UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonConfirm,pTVar4);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_Mail::OnClickDeleteMailBtn",0x21,Yes);
    pwVar6 = L"commonPopupModel is nullptr.";
    uVar5 = 0x6c;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,uVar5,pwVar6);
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
  return;
}

// SetClaimItemBtn_WrapperImpl @ 14b692c00

void __cdecl UDS_VM_Mail::SetClaimItemBtn_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_MailDataSet *this;
  UObject *pUVar2;
  FString *pFVar3;
  FWeakObjectPtr FStackX_18;
  FWeakObjectPtr FStackX_20;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)&FStackX_18);
  bVar1 = FWeakObjectPtr::IsValid(&FStackX_18);
  if (bVar1) {
    this = (UDS_MailDataSet *)FWeakObjectPtr::Get(&FStackX_18);
    UDS_MailDataSet::GetMailData(this,(FString *)&FStackX_20);
    bVar1 = FWeakObjectPtr::IsValid(&FStackX_20);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&FStackX_20);
      if (pUVar2[4].field_0x11 != '\0') {
        TStack_28._0_8_ = 0;
        TStack_28._8_8_ = 0;
        TStack_28._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x2849b,Alert_None_01,&TStack_28);
        return;
      }
      pFVar3 = ::FString::FString((FString *)&TStack_28,(FString *)((longlong)param_1 + 0x3f8));
      FDS_MailService::RequestMailItemReceive(pFVar3,None);
    }
  }
  return;
}

// SetDeleteAllReadMailBtn_WrapperImpl @ 14b692c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Mail::SetDeleteAllReadMailBtn_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_CommonPopupManager *this;
  UDS_LogManager *pUVar2;
  UDS_M_CommonPopup *pUVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  undefined1 auStackY_1f8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr aFStack_1c8 [2];
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  FDS_Text FStack_1a8;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  TStack_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this = UDS_CommonPopupManager::GetInst();
  if (this == (UDS_CommonPopupManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_Mail::OnClickDeleteAllReadMailBtn",0x28,Yes);
    pwVar6 = L"commonPopupMng is nullptr.";
    uVar5 = 0x97;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)aFStack_1c8,(void *)0x0);
    if (!bVar1) {
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      FStack_1a8.StringTableType = None;
      FStack_1a8.StringTableID = 0;
      FStack_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      FStack_1a8.StringEnumTableNameID.Number = 0;
      FStack_1a8.TimeExpressionType = None;
      FStack_1a8.IsExpression = false;
      FStack_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1a8.DateTime.Ticks = 0;
      FStack_1a8.TimeSpan.Ticks = 0;
      FStack_1a8.UniqueString.Data.ArrayNum = 0;
      FStack_1a8.UniqueString.Data.ArrayMax = 0;
      FStack_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1a8.FormatArgs.ArrayNum = 0;
      FStack_1a8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&FStack_1a8,StringUi,2);
      UDS_M_CommonPopup::SetTitle(pUVar3,&FStack_1a8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      FStack_1a8.StringTableType = None;
      FStack_1a8.StringTableID = 0;
      FStack_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      FStack_1a8.StringEnumTableNameID.Number = 0;
      FStack_1a8.TimeExpressionType = None;
      FStack_1a8.DateTime.Ticks = 0;
      FStack_1a8.TimeSpan.Ticks = 0;
      FStack_1a8.IsExpression = false;
      FStack_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1a8.UniqueString.Data.ArrayNum = 0;
      FStack_1a8.UniqueString.Data.ArrayMax = 0;
      FStack_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1a8.FormatArgs.ArrayNum = 0;
      FStack_1a8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&FStack_1a8,StringUi,0x27179);
      UDS_M_CommonPopup::SetMainContent(pUVar3,&FStack_1a8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x66,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      uStack_1b0._0_4_ = 0;
      pcStack_1b8 = OnDeleteAllMail_ClickCancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_Mail>(&TStack_158,param_1,(pmf_03e3d958 *)&pcStack_1b8);
      UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonCancel,pTVar4);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0x65,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
      pcStack_1b8 = OnDeleteAllMail_ClickConfirm;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_Mail>(&TStack_158,param_1,(pmf_03e3d958 *)&pcStack_1b8);
      UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonConfirm,pTVar4);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_Mail::OnClickDeleteAllReadMailBtn",0x28,Yes);
    pwVar6 = L"commonPopupModel is nullptr.";
    uVar5 = 0x9e;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,uVar5,pwVar6);
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
  return;
}

// SetCategoryActionBtn_WrapperImpl @ 14b692c20

void __cdecl UDS_VM_Mail::SetCategoryActionBtn_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  bool bVar2;
  UDS_MailDataSet *pUVar3;
  FWeakObjectPtr aFStackX_18 [2];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)aFStackX_18);
  bVar1 = FWeakObjectPtr::IsValid(aFStackX_18);
  if ((bVar1) && (*(char *)((longlong)param_1 + 0x3f0) == '\x01')) {
    pUVar3 = (UDS_MailDataSet *)FWeakObjectPtr::Get(aFStackX_18);
    bVar1 = UDS_MailDataSet::HasUnreadMail(pUVar3);
    pUVar3 = (UDS_MailDataSet *)FWeakObjectPtr::Get(aFStackX_18);
    bVar2 = UDS_MailDataSet::HasRewardMail(pUVar3);
    if ((!bVar1) && (!bVar2)) {
      TStack_28._0_8_ = 0;
      TStack_28._8_8_ = 0;
      TStack_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x2849c,Alert_None_01,&TStack_28);
      return;
    }
    TStack_28._0_8_ = 0;
    TStack_28._8_8_ = 0;
    FDS_MailService::RequestMailItemReceive((FString *)&TStack_28,System);
  }
  return;
}

// StaticClass @ 14b692c30

UClass * __cdecl UDS_VM_Mail::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mail",
               &Z_Registration_Info_UClass_UDS_VM_Mail.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mail,0x410,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Mail>,InternalVTableHelperCtorCaller<UDS_VM_Mail>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mail.InnerSingleton;
}

// UDS_VM_Mail @ 14b698db0

UDS_VM_Mail * __thiscall UDS_VM_Mail::UDS_VM_Mail(UDS_VM_Mail *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->MailListSwitcher = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mail__6B_;
  (this->MailInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Mail_Info *)0x0;
  (this->MailData_ViewModel).field0_0x0.DebugPtr = (UDS_VM_MailData *)0x0;
  (this->MailEntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MailEntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->MailEntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->StorageExplanation).StringTableType = None;
  (this->StorageExplanation).StringTableID = 0;
  (this->StorageExplanation).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StorageExplanation).StringEnumTableNameID.Number = 0;
  (this->StorageExplanation).DateTime.Ticks = 0;
  (this->StorageExplanation).TimeSpan.Ticks = 0;
  (this->StorageExplanation).TimeExpressionType = None;
  (this->StorageExplanation).IsExpression = false;
  (this->StorageExplanation).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StorageExplanation).UniqueString.Data.ArrayNum = 0;
  (this->StorageExplanation).UniqueString.Data.ArrayMax = 0;
  (this->StorageExplanation).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StorageExplanation).FormatArgs.ArrayNum = 0;
  (this->StorageExplanation).FormatArgs.ArrayMax = 0;
  (this->CategoryActionBtnText).StringTableType = None;
  (this->CategoryActionBtnText).StringTableID = 0;
  (this->CategoryActionBtnText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CategoryActionBtnText).StringEnumTableNameID.Number = 0;
  (this->CategoryActionBtnText).DateTime.Ticks = 0;
  (this->CategoryActionBtnText).TimeSpan.Ticks = 0;
  (this->CategoryActionBtnText).TimeExpressionType = None;
  (this->CategoryActionBtnText).IsExpression = false;
  (this->CategoryActionBtnText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CategoryActionBtnText).UniqueString.Data.ArrayNum = 0;
  (this->CategoryActionBtnText).UniqueString.Data.ArrayMax = 0;
  (this->CategoryActionBtnText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryActionBtnText).FormatArgs.ArrayNum = 0;
  (this->CategoryActionBtnText).FormatArgs.ArrayMax = 0;
  (this->CategoryActionInfoBtnText).StringTableType = None;
  (this->CategoryActionInfoBtnText).StringTableID = 0;
  (this->CategoryActionInfoBtnText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CategoryActionInfoBtnText).StringEnumTableNameID.Number = 0;
  (this->CategoryActionInfoBtnText).DateTime.Ticks = 0;
  (this->CategoryActionInfoBtnText).TimeSpan.Ticks = 0;
  (this->CategoryActionInfoBtnText).TimeExpressionType = None;
  (this->CategoryActionInfoBtnText).IsExpression = false;
  (this->CategoryActionInfoBtnText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CategoryActionInfoBtnText).UniqueString.Data.ArrayNum = 0;
  (this->CategoryActionInfoBtnText).UniqueString.Data.ArrayMax = 0;
  (this->CategoryActionInfoBtnText).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CategoryActionInfoBtnText).FormatArgs.ArrayNum = 0;
  (this->CategoryActionInfoBtnText).FormatArgs.ArrayMax = 0;
  (this->MailBgResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MailBgResourcePath).AssetPath.PackageName.Number = 0;
  (this->MailBgResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MailBgResourcePath).AssetPath.AssetName.Number = 0;
  (this->MailBgResourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MailBgResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->MailBgResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->DeleteMailBtn)._padding_ = '\0';
  (this->DeleteMailBtn).bIsCustomSelected = false;
  (this->DeleteMailBtn).bIsLacked = false;
  (this->DeleteMailBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->DeleteMailBtn).Delegate = 0;
  *(undefined8 *)&(this->DeleteMailBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->DeleteMailBtn).Delegate.field_0x10 = 0;
  (this->ClaimItemBtn)._padding_ = '\0';
  (this->ClaimItemBtn).bIsCustomSelected = false;
  (this->ClaimItemBtn).bIsLacked = false;
  (this->ClaimItemBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClaimItemBtn).Delegate = 0;
  *(undefined8 *)&(this->ClaimItemBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClaimItemBtn).Delegate.field_0x10 = 0;
  (this->DeleteAllReadMailBtn)._padding_ = '\0';
  (this->DeleteAllReadMailBtn).bIsCustomSelected = false;
  (this->DeleteAllReadMailBtn).bIsLacked = false;
  (this->DeleteAllReadMailBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->DeleteAllReadMailBtn).Delegate = 0;
  *(undefined8 *)&(this->DeleteAllReadMailBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->DeleteAllReadMailBtn).Delegate.field_0x10 = 0;
  (this->CategoryActionBtn)._padding_ = '\0';
  (this->CategoryActionBtn).bIsCustomSelected = false;
  (this->CategoryActionBtn).bIsLacked = false;
  (this->CategoryActionBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CategoryActionBtn).Delegate = 0;
  *(undefined8 *)&(this->CategoryActionBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CategoryActionBtn).Delegate.field_0x10 = 0;
  (this->FixedText_NoMail).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NoMail).StringEnumTableNameID.Number = 0;
  (this->FixedText_NoMail).DateTime.Ticks = 0;
  (this->FixedText_NoMail).TimeSpan.Ticks = 0;
  (this->FixedText_NoMail).TimeExpressionType = None;
  (this->FixedText_NoMail).IsExpression = false;
  (this->FixedText_NoMail).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_NoMail).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NoMail).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NoMail).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_NoMail).FormatArgs.ArrayNum = 0;
  (this->FixedText_NoMail).FormatArgs.ArrayMax = 0;
  this->MailSelectedSwitcher = 1;
  this->ClaimItemBtnVisibility = Collapsed;
  (this->FixedText_NoMail).StringTableType = StringUi;
  (this->FixedText_NoMail).StringTableID = 0x27166;
  (this->FixedText_NoSelectMail).StringTableType = StringUi;
  (this->FixedText_NoSelectMail).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NoSelectMail).StringEnumTableNameID.Number = 0;
  (this->FixedText_NoSelectMail).DateTime.Ticks = 0;
  (this->FixedText_NoSelectMail).TimeSpan.Ticks = 0;
  (this->FixedText_NoSelectMail).TimeExpressionType = None;
  (this->FixedText_NoSelectMail).IsExpression = false;
  (this->FixedText_NoSelectMail).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NoSelectMail).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NoSelectMail).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NoSelectMail).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_NoSelectMail).FormatArgs.ArrayNum = 0;
  (this->FixedText_NoSelectMail).FormatArgs.ArrayMax = 0;
  (this->FixedText_DeleteAllReadMail).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_DeleteAllReadMail).StringEnumTableNameID.Number = 0;
  (this->FixedText_DeleteAllReadMail).DateTime.Ticks = 0;
  (this->FixedText_DeleteAllReadMail).TimeSpan.Ticks = 0;
  (this->FixedText_DeleteAllReadMail).TimeExpressionType = None;
  (this->FixedText_DeleteAllReadMail).IsExpression = false;
  (this->FixedText_DeleteAllReadMail).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DeleteAllReadMail).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_DeleteAllReadMail).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_DeleteAllReadMail).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DeleteAllReadMail).FormatArgs.ArrayNum = 0;
  (this->FixedText_DeleteAllReadMail).FormatArgs.ArrayMax = 0;
  (this->FixedText_DeleteMail).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_DeleteMail).StringEnumTableNameID.Number = 0;
  (this->FixedText_DeleteMail).DateTime.Ticks = 0;
  (this->FixedText_DeleteMail).TimeSpan.Ticks = 0;
  (this->FixedText_DeleteMail).TimeExpressionType = None;
  (this->FixedText_DeleteMail).IsExpression = false;
  (this->FixedText_DeleteMail).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DeleteMail).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_DeleteMail).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_DeleteMail).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_DeleteMail).FormatArgs.ArrayNum = 0;
  (this->FixedText_DeleteMail).FormatArgs.ArrayMax = 0;
  (this->FixedText_CollectItem).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_CollectItem).StringEnumTableNameID.Number = 0;
  (this->FixedText_CollectItem).DateTime.Ticks = 0;
  (this->FixedText_CollectItem).TimeSpan.Ticks = 0;
  (this->FixedText_CollectItem).TimeExpressionType = None;
  (this->FixedText_CollectItem).IsExpression = false;
  (this->FixedText_CollectItem).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_CollectItem).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_CollectItem).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_CollectItem).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_CollectItem).FormatArgs.ArrayNum = 0;
  (this->FixedText_CollectItem).FormatArgs.ArrayMax = 0;
  (this->SelectedMailUID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedMailUID).Data.ArrayNum = 0;
  (this->SelectedMailUID).Data.ArrayMax = 0;
  (this->FixedText_NoSelectMail).StringTableID = 0x2717a;
  (this->FixedText_DeleteAllReadMail).StringTableType = StringUi;
  (this->FixedText_DeleteAllReadMail).StringTableID = 0x27101;
  (this->FixedText_DeleteMail).StringTableType = StringUi;
  (this->FixedText_DeleteMail).StringTableID = 0x27103;
  (this->FixedText_CollectItem).StringTableType = StringUi;
  (this->FixedText_CollectItem).StringTableID = 0x27104;
  return this;
}

// UDS_VM_Mail @ 14b699130

UDS_VM_Mail * __thiscall UDS_VM_Mail::UDS_VM_Mail(UDS_VM_Mail *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->MailListSwitcher = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mail__6B_;
  (this->MailInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Mail_Info *)0x0;
  (this->MailData_ViewModel).field0_0x0.DebugPtr = (UDS_VM_MailData *)0x0;
  (this->MailEntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MailEntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->MailEntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->StorageExplanation).StringTableType = None;
  (this->StorageExplanation).StringTableID = 0;
  (this->StorageExplanation).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StorageExplanation).StringEnumTableNameID.Number = 0;
  (this->StorageExplanation).DateTime.Ticks = 0;
  (this->StorageExplanation).TimeSpan.Ticks = 0;
  (this->StorageExplanation).TimeExpressionType = None;
  (this->StorageExplanation).IsExpression = false;
  (this->StorageExplanation).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StorageExplanation).UniqueString.Data.ArrayNum = 0;
  (this->StorageExplanation).UniqueString.Data.ArrayMax = 0;
  (this->StorageExplanation).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StorageExplanation).FormatArgs.ArrayNum = 0;
  (this->StorageExplanation).FormatArgs.ArrayMax = 0;
  (this->CategoryActionBtnText).StringTableType = None;
  (this->CategoryActionBtnText).StringTableID = 0;
  (this->CategoryActionBtnText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CategoryActionBtnText).StringEnumTableNameID.Number = 0;
  (this->CategoryActionBtnText).DateTime.Ticks = 0;
  (this->CategoryActionBtnText).TimeSpan.Ticks = 0;
  (this->CategoryActionBtnText).TimeExpressionType = None;
  (this->CategoryActionBtnText).IsExpression = false;
  (this->CategoryActionBtnText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CategoryActionBtnText).UniqueString.Data.ArrayNum = 0;
  (this->CategoryActionBtnText).UniqueString.Data.ArrayMax = 0;
  (this->CategoryActionBtnText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryActionBtnText).FormatArgs.ArrayNum = 0;
  (this->CategoryActionBtnText).FormatArgs.ArrayMax = 0;
  (this->CategoryActionInfoBtnText).StringTableType = None;
  (this->CategoryActionInfoBtnText).StringTableID = 0;
  (this->CategoryActionInfoBtnText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CategoryActionInfoBtnText).StringEnumTableNameID.Number = 0;
  (this->CategoryActionInfoBtnText).DateTime.Ticks = 0;
  (this->CategoryActionInfoBtnText).TimeSpan.Ticks = 0;
  (this->CategoryActionInfoBtnText).TimeExpressionType = None;
  (this->CategoryActionInfoBtnText).IsExpression = false;
  (this->CategoryActionInfoBtnText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CategoryActionInfoBtnText).UniqueString.Data.ArrayNum = 0;
  (this->CategoryActionInfoBtnText).UniqueString.Data.ArrayMax = 0;
  (this->CategoryActionInfoBtnText).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CategoryActionInfoBtnText).FormatArgs.ArrayNum = 0;
  (this->CategoryActionInfoBtnText).FormatArgs.ArrayMax = 0;
  (this->MailBgResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MailBgResourcePath).AssetPath.PackageName.Number = 0;
  (this->MailBgResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MailBgResourcePath).AssetPath.AssetName.Number = 0;
  (this->MailBgResourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MailBgResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->MailBgResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->DeleteMailBtn)._padding_ = '\0';
  (this->DeleteMailBtn).bIsCustomSelected = false;
  (this->DeleteMailBtn).bIsLacked = false;
  (this->DeleteMailBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->DeleteMailBtn).Delegate = 0;
  *(undefined8 *)&(this->DeleteMailBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->DeleteMailBtn).Delegate.field_0x10 = 0;
  (this->ClaimItemBtn)._padding_ = '\0';
  (this->ClaimItemBtn).bIsCustomSelected = false;
  (this->ClaimItemBtn).bIsLacked = false;
  (this->ClaimItemBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClaimItemBtn).Delegate = 0;
  *(undefined8 *)&(this->ClaimItemBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClaimItemBtn).Delegate.field_0x10 = 0;
  (this->DeleteAllReadMailBtn)._padding_ = '\0';
  (this->DeleteAllReadMailBtn).bIsCustomSelected = false;
  (this->DeleteAllReadMailBtn).bIsLacked = false;
  (this->DeleteAllReadMailBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->DeleteAllReadMailBtn).Delegate = 0;
  *(undefined8 *)&(this->DeleteAllReadMailBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->DeleteAllReadMailBtn).Delegate.field_0x10 = 0;
  (this->CategoryActionBtn)._padding_ = '\0';
  (this->CategoryActionBtn).bIsCustomSelected = false;
  (this->CategoryActionBtn).bIsLacked = false;
  (this->CategoryActionBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CategoryActionBtn).Delegate = 0;
  *(undefined8 *)&(this->CategoryActionBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CategoryActionBtn).Delegate.field_0x10 = 0;
  (this->FixedText_NoMail).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NoMail).StringEnumTableNameID.Number = 0;
  (this->FixedText_NoMail).DateTime.Ticks = 0;
  (this->FixedText_NoMail).TimeSpan.Ticks = 0;
  (this->FixedText_NoMail).TimeExpressionType = None;
  (this->FixedText_NoMail).IsExpression = false;
  (this->FixedText_NoMail).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_NoMail).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NoMail).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NoMail).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_NoMail).FormatArgs.ArrayNum = 0;
  (this->FixedText_NoMail).FormatArgs.ArrayMax = 0;
  this->MailSelectedSwitcher = 1;
  this->ClaimItemBtnVisibility = Collapsed;
  (this->FixedText_NoMail).StringTableType = StringUi;
  (this->FixedText_NoMail).StringTableID = 0x27166;
  (this->FixedText_NoSelectMail).StringTableType = StringUi;
  (this->FixedText_NoSelectMail).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NoSelectMail).StringEnumTableNameID.Number = 0;
  (this->FixedText_NoSelectMail).DateTime.Ticks = 0;
  (this->FixedText_NoSelectMail).TimeSpan.Ticks = 0;
  (this->FixedText_NoSelectMail).TimeExpressionType = None;
  (this->FixedText_NoSelectMail).IsExpression = false;
  (this->FixedText_NoSelectMail).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NoSelectMail).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NoSelectMail).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NoSelectMail).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_NoSelectMail).FormatArgs.ArrayNum = 0;
  (this->FixedText_NoSelectMail).FormatArgs.ArrayMax = 0;
  (this->FixedText_DeleteAllReadMail).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_DeleteAllReadMail).StringEnumTableNameID.Number = 0;
  (this->FixedText_DeleteAllReadMail).DateTime.Ticks = 0;
  (this->FixedText_DeleteAllReadMail).TimeSpan.Ticks = 0;
  (this->FixedText_DeleteAllReadMail).TimeExpressionType = None;
  (this->FixedText_DeleteAllReadMail).IsExpression = false;
  (this->FixedText_DeleteAllReadMail).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DeleteAllReadMail).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_DeleteAllReadMail).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_DeleteAllReadMail).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DeleteAllReadMail).FormatArgs.ArrayNum = 0;
  (this->FixedText_DeleteAllReadMail).FormatArgs.ArrayMax = 0;
  (this->FixedText_DeleteMail).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_DeleteMail).StringEnumTableNameID.Number = 0;
  (this->FixedText_DeleteMail).DateTime.Ticks = 0;
  (this->FixedText_DeleteMail).TimeSpan.Ticks = 0;
  (this->FixedText_DeleteMail).TimeExpressionType = None;
  (this->FixedText_DeleteMail).IsExpression = false;
  (this->FixedText_DeleteMail).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DeleteMail).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_DeleteMail).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_DeleteMail).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_DeleteMail).FormatArgs.ArrayNum = 0;
  (this->FixedText_DeleteMail).FormatArgs.ArrayMax = 0;
  (this->FixedText_CollectItem).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_CollectItem).StringEnumTableNameID.Number = 0;
  (this->FixedText_CollectItem).DateTime.Ticks = 0;
  (this->FixedText_CollectItem).TimeSpan.Ticks = 0;
  (this->FixedText_CollectItem).TimeExpressionType = None;
  (this->FixedText_CollectItem).IsExpression = false;
  (this->FixedText_CollectItem).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_CollectItem).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_CollectItem).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_CollectItem).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_CollectItem).FormatArgs.ArrayNum = 0;
  (this->FixedText_CollectItem).FormatArgs.ArrayMax = 0;
  (this->SelectedMailUID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedMailUID).Data.ArrayNum = 0;
  (this->SelectedMailUID).Data.ArrayMax = 0;
  (this->FixedText_NoSelectMail).StringTableID = 0x2717a;
  (this->FixedText_DeleteAllReadMail).StringTableType = StringUi;
  (this->FixedText_DeleteAllReadMail).StringTableID = 0x27101;
  (this->FixedText_DeleteMail).StringTableType = StringUi;
  (this->FixedText_DeleteMail).StringTableID = 0x27103;
  (this->FixedText_CollectItem).StringTableType = StringUi;
  (this->FixedText_CollectItem).StringTableID = 0x27104;
  return this;
}

// ~UDS_VM_Mail @ 14b69ab10

void __thiscall UDS_VM_Mail::~UDS_VM_Mail(UDS_VM_Mail *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mail__6B_;
  pFVar1 = (this->SelectedMailUID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_CollectItem).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_CollectItem).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_CollectItem).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_CollectItem).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_DeleteMail).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_DeleteMail).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_DeleteMail).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_DeleteMail).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_DeleteAllReadMail).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_DeleteAllReadMail).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_DeleteAllReadMail).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_DeleteAllReadMail).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_NoSelectMail).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_NoSelectMail).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_NoSelectMail).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_NoSelectMail).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_NoMail).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_NoMail).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_NoMail).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_NoMail).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CategoryActionBtn).Delegate);
  pvVar2 = *(void **)&(this->CategoryActionBtn).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CategoryActionBtn).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DeleteAllReadMailBtn).Delegate);
  pvVar2 = *(void **)&(this->DeleteAllReadMailBtn).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DeleteAllReadMailBtn).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClaimItemBtn).Delegate);
  pvVar2 = *(void **)&(this->ClaimItemBtn).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClaimItemBtn).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DeleteMailBtn).Delegate);
  pvVar2 = *(void **)&(this->DeleteMailBtn).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DeleteMailBtn).Delegate);
  pFVar1 = (this->MailBgResourcePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->CategoryActionInfoBtnText).FormatArgs.AllocatorInstance.Data,
             (this->CategoryActionInfoBtnText).FormatArgs.ArrayNum);
  pFVar1 = (this->CategoryActionInfoBtnText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CategoryActionInfoBtnText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CategoryActionBtnText).FormatArgs.AllocatorInstance.Data,
             (this->CategoryActionBtnText).FormatArgs.ArrayNum);
  pFVar1 = (this->CategoryActionBtnText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CategoryActionBtnText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->StorageExplanation).FormatArgs.AllocatorInstance.Data,
             (this->StorageExplanation).FormatArgs.ArrayNum);
  pFVar1 = (this->StorageExplanation).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StorageExplanation).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MailEntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d2c0

IClassDescriptor * __thiscall UDS_VM_Mail::GetFieldNotificationDescriptor(UDS_VM_Mail *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Mail::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69dd20

UClass * __cdecl UDS_VM_Mail::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mail",
               &Z_Registration_Info_UClass_UDS_VM_Mail.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mail,0x410,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Mail>,InternalVTableHelperCtorCaller<UDS_VM_Mail>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mail.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Mail @ 14b69e6d0

void __cdecl UDS_VM_Mail::StaticRegisterNativesUDS_VM_Mail(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Mail_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnMailDataSetChanged @ 14b69f970

void __cdecl UDS_VM_Mail::execOnMailDataSetChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnMailDataSetChanged((UDS_VM_Mail *)param_1,local_res10);
  return;
}

// BindModel @ 14bed7980

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_Mail::BindModel(UDS_VM_Mail *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res10 [8];
  FWeakObjectPtr local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName local_a0;
  UDS_VM_Mail *local_98;
  FName *local_90;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res18);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this);
  pUVar3 = FWeakObjectPtr::Get(&local_res18);
  pcVar4 = strstr("&UDS_VM_Mail::OnMailDataSetChanged","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bed7a4b:
    pcVar6 = &DAT_00000002;
LAB_14bed7a50:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bed7a4b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bed7a50;
  }
  ::FName::FName(&local_a0,pcVar6);
  if ((this == (UDS_VM_Mail *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = local_a0;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((this == (UDS_VM_Mail *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_98 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Mail *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_98);
  local_a8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_60);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14bed7b91;
  }
  local_90 = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_BindDynamic<UDS_VM_Mail>'::__l2::<lambda_1>::operator()(&local_90);
LAB_14bed7b91:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_48);
  local_88.Object = local_b0;
  local_88.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_78);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_88);
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// InitViewModel @ 14bef2d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_Mail::InitViewModel(UDS_VM_Mail *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_Mail_Info *pUVar3;
  UDS_VM_MailData *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->MailInfo_ViewModel).field0_0x0.DebugPtr == (UDS_VM_Mail_Info *)0x0) {
    local_a8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Mail_Info_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Mail_Info_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar3 = (UDS_VM_Mail_Info *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_Mail_Info *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_VM_Mail_Info *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->MailInfo_ViewModel).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->MailData_ViewModel).field0_0x0.DebugPtr == (UDS_VM_MailData *)0x0) {
    local_a8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_MailData_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_MailData_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar4 = (UDS_VM_MailData *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (pUVar4 != (UDS_VM_MailData *)0x0) {
      *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_MailData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->MailData_ViewModel).field0_0x0.DebugPtr = pUVar4;
  }
  return;
}

// OnClickCategoryActionBtn @ 14bef8c30

void __thiscall
UDS_VM_Mail::OnClickCategoryActionBtn(UDS_VM_Mail *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  bool bVar2;
  UDS_MailDataSet *pUVar3;
  FWeakObjectPtr local_res18 [2];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if ((bVar1) && (this->MailCategory == System)) {
    pUVar3 = (UDS_MailDataSet *)FWeakObjectPtr::Get(local_res18);
    bVar1 = UDS_MailDataSet::HasUnreadMail(pUVar3);
    pUVar3 = (UDS_MailDataSet *)FWeakObjectPtr::Get(local_res18);
    bVar2 = UDS_MailDataSet::HasRewardMail(pUVar3);
    if ((!bVar1) && (!bVar2)) {
      local_28._0_8_ = 0;
      local_28._8_8_ = 0;
      local_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x2849c,Alert_None_01,&local_28);
      return;
    }
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    FDS_MailService::RequestMailItemReceive((FString *)&local_28,System);
  }
  return;
}

// OnClickClaimItemBtn @ 14bef8ce0

void __thiscall UDS_VM_Mail::OnClickClaimItemBtn(UDS_VM_Mail *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_MailDataSet *this_00;
  UObject *pUVar2;
  FString *pFVar3;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    this_00 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_res18);
    UDS_MailDataSet::GetMailData(this_00,(FString *)&local_res20);
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res20);
      if (pUVar2[4].field_0x11 != '\0') {
        local_28._0_8_ = 0;
        local_28._8_8_ = 0;
        local_28._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x2849b,Alert_None_01,&local_28);
        return;
      }
      pFVar3 = ::FString::FString((FString *)&local_28,&this->SelectedMailUID);
      FDS_MailService::RequestMailItemReceive(pFVar3,None);
    }
  }
  return;
}

// OnClickDeleteAllReadMailBtn @ 14bef8eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mail::OnClickDeleteAllReadMailBtn(UDS_VM_Mail *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_LogManager *pUVar2;
  UDS_M_CommonPopup *pUVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  undefined1 auStackY_1f8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_1c8 [2];
  code *local_1b8;
  undefined8 uStack_1b0;
  FDS_Text local_1a8;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 == (UDS_CommonPopupManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Mail::OnClickDeleteAllReadMailBtn",0x28,Yes);
    pwVar6 = L"commonPopupMng is nullptr.";
    uVar5 = 0x97;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)local_1c8,(void *)0x0);
    if (!bVar1) {
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      local_1a8.StringTableType = None;
      local_1a8.StringTableID = 0;
      local_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1a8.StringEnumTableNameID.Number = 0;
      local_1a8.TimeExpressionType = None;
      local_1a8.IsExpression = false;
      local_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.DateTime.Ticks = 0;
      local_1a8.TimeSpan.Ticks = 0;
      local_1a8.UniqueString.Data.ArrayNum = 0;
      local_1a8.UniqueString.Data.ArrayMax = 0;
      local_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.FormatArgs.ArrayNum = 0;
      local_1a8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1a8,StringUi,2);
      UDS_M_CommonPopup::SetTitle(pUVar3,&local_1a8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      local_1a8.StringTableType = None;
      local_1a8.StringTableID = 0;
      local_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1a8.StringEnumTableNameID.Number = 0;
      local_1a8.TimeExpressionType = None;
      local_1a8.DateTime.Ticks = 0;
      local_1a8.TimeSpan.Ticks = 0;
      local_1a8.IsExpression = false;
      local_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.UniqueString.Data.ArrayNum = 0;
      local_1a8.UniqueString.Data.ArrayMax = 0;
      local_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.FormatArgs.ArrayNum = 0;
      local_1a8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1a8,StringUi,0x27179);
      UDS_M_CommonPopup::SetMainContent(pUVar3,&local_1a8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x66,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      uStack_1b0._0_4_ = 0;
      local_1b8 = OnDeleteAllMail_ClickCancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_Mail>(&local_158,this,(pmf_03e3d958 *)&local_1b8);
      UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonCancel,pTVar4);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0x65,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
      local_1b8 = OnDeleteAllMail_ClickConfirm;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_Mail>(&local_158,this,(pmf_03e3d958 *)&local_1b8);
      UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonConfirm,pTVar4);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Mail::OnClickDeleteAllReadMailBtn",0x28,Yes);
    pwVar6 = L"commonPopupModel is nullptr.";
    uVar5 = 0x9e;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnClickDeleteMailBtn @ 14bef91c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Mail::OnClickDeleteMailBtn(UDS_VM_Mail *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_LogManager *pUVar2;
  UDS_M_CommonPopup *pUVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  undefined1 auStackY_1f8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_1c8 [2];
  code *local_1b8;
  undefined8 uStack_1b0;
  FDS_Text local_1a8;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 == (UDS_CommonPopupManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Mail::OnClickDeleteMailBtn",0x21,Yes);
    pwVar6 = L"commonPopupMng is nullptr.";
    uVar5 = 0x65;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)local_1c8,(void *)0x0);
    if (!bVar1) {
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      local_1a8.StringTableType = None;
      local_1a8.StringTableID = 0;
      local_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1a8.StringEnumTableNameID.Number = 0;
      local_1a8.TimeExpressionType = None;
      local_1a8.IsExpression = false;
      local_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.DateTime.Ticks = 0;
      local_1a8.TimeSpan.Ticks = 0;
      local_1a8.UniqueString.Data.ArrayNum = 0;
      local_1a8.UniqueString.Data.ArrayMax = 0;
      local_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.FormatArgs.ArrayNum = 0;
      local_1a8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1a8,StringUi,2);
      UDS_M_CommonPopup::SetTitle(pUVar3,&local_1a8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      local_1a8.StringTableType = None;
      local_1a8.StringTableID = 0;
      local_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1a8.StringEnumTableNameID.Number = 0;
      local_1a8.TimeExpressionType = None;
      local_1a8.DateTime.Ticks = 0;
      local_1a8.TimeSpan.Ticks = 0;
      local_1a8.IsExpression = false;
      local_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.UniqueString.Data.ArrayNum = 0;
      local_1a8.UniqueString.Data.ArrayMax = 0;
      local_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.FormatArgs.ArrayNum = 0;
      local_1a8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1a8,StringUi,0x27178);
      UDS_M_CommonPopup::SetMainContent(pUVar3,&local_1a8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x66,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      uStack_1b0._0_4_ = 0;
      local_1b8 = OnDeleteMail_ClickCancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_Mail>(&local_158,this,(pmf_03e3d958 *)&local_1b8);
      UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonCancel,pTVar4);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0x65,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
      local_1b8 = OnDeleteMail_ClickConfirm;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_Mail>(&local_158,this,(pmf_03e3d958 *)&local_1b8);
      UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonConfirm,pTVar4);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Mail::OnClickDeleteMailBtn",0x21,Yes);
    pwVar6 = L"commonPopupModel is nullptr.";
    uVar5 = 0x6c;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnDeleteAllMail_ClickCancel @ 14befc210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mail::OnDeleteAllMail_ClickCancel
          (UDS_VM_Mail *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Mail::OnDeleteAllMail_ClickCancel",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x19c,L"windowMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_144,&local_148);
  }
  return;
}

// OnDeleteAllMail_ClickConfirm @ 14befc330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mail::OnDeleteAllMail_ClickConfirm
          (UDS_VM_Mail *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar3;
  UDS_MailDataSet *this_01;
  UObject *pUVar4;
  int iVar5;
  ForAnyElementType this_02;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [4];
  float local_174;
  uint local_170 [2];
  FWeakObjectPtr local_168;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_160;
  TArray<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Mail::OnDeleteAllMail_ClickConfirm",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x1a8,L"windowMng is nullptr.");
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  else {
    local_174 = 0.0;
    local_170[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_170,&local_174);
    TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)&local_168);
    bVar2 = FWeakObjectPtr::IsValid(&local_168);
    if (!bVar2) {
      return;
    }
    this_01 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_168);
    UDS_MailDataSet::GetSortedMailList(this_01,&local_148);
    iVar5 = local_148.ArrayNum;
    pFVar1 = (FWeakObjectPtr *)(local_148.AllocatorInstance.Data + (longlong)iVar5 * 8);
    this_02.Data = local_148.AllocatorInstance.Data;
    while( true ) {
      if (local_148.ArrayNum != iVar5) {
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_178);
      }
      if ((FWeakObjectPtr *)this_02.Data == pFVar1) {
        local_160._0_8_ = 0;
        local_160._8_8_ = 0;
        local_160._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x2849a,Alert_None_01,&local_160);
        goto LAB_14befc4fe;
      }
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_02.Data);
      if (((bVar2) &&
          (pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data),
          pUVar4[4].field_0x10 != '\0')) &&
         ((pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data),
          pUVar4[4].field_0x12 == '\0' ||
          (pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data),
          pUVar4[4].field_0x11 != '\0')))) break;
      this_02.Data = this_02.Data + 8;
    }
    local_160._0_8_ = 0;
    local_160._8_8_ = 0;
    FDS_MailService::RequestMailDelete((FString *)&local_160,System);
  }
LAB_14befc4fe:
  if ((FWeakObjectPtr *)local_148.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  return;
}

// OnDeleteMail_ClickCancel @ 14befc540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mail::OnDeleteMail_ClickCancel
          (UDS_VM_Mail *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Mail::OnDeleteMail_ClickCancel",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x15f,L"windowMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_144,&local_148);
  }
  return;
}

// OnDeleteMail_ClickConfirm @ 14befc660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mail::OnDeleteMail_ClickConfirm
          (UDS_VM_Mail *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  longlong lVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar3;
  UDS_MailDataSet *this_01;
  UObject *pUVar4;
  FString *pFVar5;
  undefined1 auStackY_198 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_168;
  float local_150;
  uint local_14c;
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Mail::OnDeleteMail_ClickConfirm",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x16b,L"windowMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_150 = 0.0;
    local_14c = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,&local_14c,&local_150);
    TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)(local_148 + 8));
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_148 + 8));
    if (bVar2) {
      this_01 = (UDS_MailDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_148 + 8));
      UDS_MailDataSet::GetMailData(this_01,(FString *)local_148);
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_148);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_148);
        if (pUVar4[4].field_0x11 == '\0') {
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_148);
          lVar1 = *(longlong *)&pUVar4[4].field_0x18;
          if (lVar1 != 0) {
            if ((*(int *)(lVar1 + 0x30) < 1) && (*(int *)(lVar1 + 0x48) < 1)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              local_168._0_8_ = 0;
              local_168._8_8_ = 0;
              local_168._16_4_ = 0;
              UDS_UIMessageManager::OpenMsgByStringUi(0x28496,Alert_None_01,&local_168);
              return;
            }
            if (0 < *(int *)(lVar1 + 0x18)) {
              local_168._0_8_ = 0;
              local_168._8_8_ = 0;
              local_168._16_4_ = 0;
              UDS_UIMessageManager::OpenMsgByStringUi(0x28497,Alert_None_01,&local_168);
              return;
            }
          }
        }
        pFVar5 = ::FString::FString((FString *)&local_168,&this->SelectedMailUID);
        FDS_MailService::RequestMailDelete(pFVar5,None);
      }
      else {
        local_168._0_8_ = 0;
        local_168._8_8_ = 0;
        local_168._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x28498,Alert_None_01,&local_168);
      }
    }
  }
  return;
}

// OnMailDataSetChanged @ 14beff000

void __thiscall UDS_VM_Mail::OnMailDataSetChanged(UDS_VM_Mail *this,UDS_DataSetBase *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_DataSetBase *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res10;
  UDS_DataSetBase *local_res18;
  FString local_18;
  
  if (param_1 != (UDS_DataSetBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_MailDataSet_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (pUVar4 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar3->_padding_)) goto LAB_14beff044;
  }
  pUVar4 = (UDS_DataSetBase *)0x0;
LAB_14beff044:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_DataSetBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_DataSetBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if ((bVar2) && (pUVar4 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res10), param_1 == pUVar4))
  {
    SetMailList(this);
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    ::FString::FString(&local_18,(FString *)&pUVar5[6].field_0x10);
    UpdateMailInfo(this,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bf04f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mail::OnSetViewModel(UDS_VM_Mail *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FString *pFVar1;
  FInstancedStruct *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  FObjectPtr_u_0 FVar4;
  FName FVar5;
  int iVar6;
  int iVar7;
  UDS_MailManager *this_01;
  UDS_LogManager *pUVar8;
  FObjectPtr_u_0 *pFVar9;
  FDS_Int32StringFormatArg *pFVar10;
  ForAnyElementType FVar11;
  undefined1 auStackY_318 [32];
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_2e8;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_2d8;
  FName local_2c8;
  int local_2c0;
  FName local_2b8;
  int local_2b0;
  FName local_2a8;
  int local_2a0;
  FName local_298;
  int local_290;
  FName local_288;
  int local_280;
  undefined8 local_278;
  undefined8 local_270;
  FDS_Text local_268;
  FDS_Text local_218;
  FDS_Text local_1c8;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_178.Object = param_1->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_2d8,&local_178);
  if (local_2d8.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.SharedReferenceCount.ReferenceController);
    goto LAB_14bf053c1;
  }
  if ((local_2d8.Object)->TabFrameID == MailSystem) {
    this->MailCategory = System;
    local_218.StringTableType = None;
    local_218.StringTableID = 0;
    local_218.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_218.StringEnumTableNameID.Number = 0;
    local_218.DateTime.Ticks = 0;
    local_218.TimeSpan.Ticks = 0;
    local_218.TimeExpressionType = None;
    local_218.IsExpression = false;
    local_218.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.UniqueString.Data.ArrayNum = 0;
    local_218.UniqueString.Data.ArrayMax = 0;
    local_218.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FormatArgs.ArrayNum = 0;
    local_218.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_218,StringUi,0x27102);
    iVar6 = FFieldNotificationClassDescriptor::CategoryActionBtnText.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::CategoryActionBtnText.FieldName;
    FDS_Text::operator=(&this->CategoryActionBtnText,&local_218);
    local_2c8 = FVar5;
    local_2c0 = iVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2c8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_218.FormatArgs.AllocatorInstance.Data,
               local_218.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_218.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_218.FormatArgs.AllocatorInstance.Data);
    }
    if (local_218.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.UniqueString.Data.AllocatorInstance.Data);
    }
    local_1c8.StringTableType = None;
    local_1c8.StringTableID = 0;
    local_1c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_1c8.StringEnumTableNameID.Number = 0;
    local_1c8.TimeExpressionType = None;
    local_1c8.DateTime.Ticks = 0;
    local_1c8.TimeSpan.Ticks = 0;
    local_1c8.IsExpression = false;
    local_1c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.UniqueString.Data.ArrayNum = 0;
    local_1c8.UniqueString.Data.ArrayMax = 0;
    local_1c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.FormatArgs.ArrayNum = 0;
    local_1c8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_1c8,StringUi,0x27104);
    iVar6 = FFieldNotificationClassDescriptor::CategoryActionInfoBtnText.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::CategoryActionInfoBtnText.FieldName;
    FDS_Text::operator=(&this->CategoryActionInfoBtnText,&local_1c8);
    local_2b8 = FVar5;
    local_2b0 = iVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1c8.FormatArgs.AllocatorInstance.Data,
               local_1c8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_1c8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1c8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_1c8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  this_01 = UDS_MailManager::GetInst();
  if (this_01 == (UDS_MailManager *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_Mail::OnSetViewModel",0x1b,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_168.Ptr,0x2d,L"mailManager is nullptr");
      FVar11.Data = (FScriptContainerElement *)local_168._padding_;
      goto LAB_14bf0538d;
    }
  }
  else {
    UDS_MailManager::LoadMailDataDB(this_01);
    local_278 = 0;
    pFVar1 = &this->SelectedMailUID;
    local_270 = 0;
    if (pFVar1 != (FString *)&local_278) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->SelectedMailUID).Data.ArrayNum = 0;
      (this->SelectedMailUID).Data.ArrayMax = 0;
    }
    iVar6 = FFieldNotificationClassDescriptor::MailListSwitcher.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::MailListSwitcher.FieldName;
    if (this->MailListSwitcher != 1) {
      this->MailListSwitcher = 1;
      local_2a0 = iVar6;
      local_2a8 = FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2a8);
    }
    iVar6 = FFieldNotificationClassDescriptor::MailSelectedSwitcher.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::MailSelectedSwitcher.FieldName;
    if (this->MailSelectedSwitcher != 1) {
      this->MailSelectedSwitcher = 1;
      local_290 = iVar6;
      local_298 = FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_298);
    }
    iVar6 = DS_CommonDataHelper::MailSystemStorageLimit();
    local_268.StringTableType = None;
    local_268.StringTableID = 0;
    local_268.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_268.StringEnumTableNameID.Number = 0;
    local_268.DateTime.Ticks = 0;
    local_268.TimeSpan.Ticks = 0;
    local_268.TimeExpressionType = None;
    local_268.IsExpression = false;
    local_268.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.UniqueString.Data.ArrayNum = 0;
    local_268.UniqueString.Data.ArrayMax = 0;
    local_268.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.FormatArgs.ArrayNum = 0;
    local_268.FormatArgs.ArrayMax = 0;
    local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.ArrayNum = 0;
    local_2e8.ArrayMax = 0;
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_2e8.AllocatorInstance,&local_2e8.ArrayMax);
    local_2e8.ArrayNum = iVar7 + 1;
    this_00 = (FInstancedStruct *)(local_2e8.AllocatorInstance.Data + (longlong)iVar7 * 0x28);
    FInstancedStruct::FInstancedStruct(this_00);
    pFVar9 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar4 = pFVar9[1];
    this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar9;
    this_00[1].StructMemory = (uchar *)FVar4;
    this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar9[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
    pFVar10 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
    if (pFVar10 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar10->Value = iVar6;
    }
    FDS_Text::SetTextFormatFromStringTable(&local_268,StringUi,0x27165,&local_2e8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_2e8.AllocatorInstance.Data,local_2e8.ArrayNum);
    if ((FDS_TextFormatArg *)local_2e8.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_2e8.AllocatorInstance.Data);
    }
    iVar6 = FFieldNotificationClassDescriptor::StorageExplanation.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::StorageExplanation.FieldName;
    FDS_Text::operator=(&this->StorageExplanation,&local_268);
    local_288 = FVar5;
    local_280 = iVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_288);
    this->bIsFristOpenMailVM = true;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_268.FormatArgs.AllocatorInstance.Data,
               local_268.FormatArgs.ArrayNum);
    FVar11.Data = local_268.UniqueString.Data.AllocatorInstance.Data;
    if ((FDS_TextFormatArg *)local_268.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_268.FormatArgs.AllocatorInstance.Data);
      FVar11.Data = local_268.UniqueString.Data.AllocatorInstance.Data;
    }
LAB_14bf0538d:
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar11.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d8.SharedReferenceCount.ReferenceController);
LAB_14bf053c1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCategoryActionBtn @ 14bf13410

void __thiscall UDS_VM_Mail::SetCategoryActionBtn(UDS_VM_Mail *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::CategoryActionBtnText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::CategoryActionBtnText.FieldName;
  FDS_Text::operator=(&this->CategoryActionBtnText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetCategoryActionInfoBtn @ 14bf13470

void __thiscall UDS_VM_Mail::SetCategoryActionInfoBtn(UDS_VM_Mail *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::CategoryActionInfoBtnText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::CategoryActionInfoBtnText.FieldName;
  FDS_Text::operator=(&this->CategoryActionInfoBtnText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMailList @ 14bf16090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Mail::SetMailList(UDS_VM_Mail *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  FName FVar5;
  FDS_ViewModelContext_Mail *pFVar6;
  FSharedReferencer<1> FVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  int iVar10;
  UDS_LogManager *pUVar11;
  UDS_MailDataSet *pUVar12;
  UObject *pUVar13;
  UDS_MailData *this_00;
  UDS_UserObjectListItem *this_01;
  int iVar14;
  FName *pFVar15;
  longlong lVar16;
  FWeakObjectPtr *pFVar17;
  ForAnyElementType FVar18;
  undefined1 auStackY_2b8 [32];
  undefined1 local_278 [8];
  FString local_270;
  ForAnyElementType local_260;
  int local_258;
  int local_254;
  FWeakObjectPtr local_250;
  FWeakObjectPtr local_248;
  TArray<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_240;
  FWeakObjectPtr *local_230;
  TSharedPtr<FDS_ViewModelContext_Mail,1> local_228;
  UDS_UserObjectListItem *local_218 [2];
  FName local_208;
  int local_200;
  FName local_1f8;
  int local_1f0;
  FName local_1e8;
  int local_1e0;
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  int local_1c0;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  TSharedPtr<FDS_ViewModelContext_Mail,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  undefined8 local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  pFVar15 = &local_1b8;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FDS_EntryBindingEventField::Reset(&this->MailEntryBindingEventField);
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)&local_250);
  bVar9 = FWeakObjectPtr::IsValid(&local_250);
  if (!bVar9) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_Mail::SetMailList",0x18,Yes);
    UDS_LogManager::PrintLog(pUVar11,1,Warning,local_158.Ptr,0x101,L"mailDataSet is nullptr");
    local_240.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
    goto LAB_14bf166d7;
  }
  pUVar12 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_250);
  UDS_MailDataSet::GetSortedMailList(pUVar12,&local_240);
  if (local_240.ArrayNum == 0) {
    pFVar1 = &this->SelectedMailUID;
    if (pFVar1 != (FString *)local_168) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->SelectedMailUID).Data.ArrayNum = 0;
      (this->SelectedMailUID).Data.ArrayMax = 0;
    }
    iVar14 = FFieldNotificationClassDescriptor::MailListSwitcher.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::MailListSwitcher.FieldName;
    if (this->MailListSwitcher != 1) {
      this->MailListSwitcher = 1;
      local_200 = iVar14;
      local_208 = FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_208);
    }
    iVar14 = FFieldNotificationClassDescriptor::MailSelectedSwitcher.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::MailSelectedSwitcher.FieldName;
    if (this->MailSelectedSwitcher != 1) {
      this->MailSelectedSwitcher = 1;
      local_1f0 = iVar14;
      local_1f8 = FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
    }
    pFVar15 = &local_1e8;
    local_1e0 = FFieldNotificationClassDescriptor::MailEntryBindingEventField.BitNumber;
    lVar16 = this->_padding_;
    local_1e8 = FFieldNotificationClassDescriptor::MailEntryBindingEventField.FieldName;
  }
  else {
    if (this->bIsFristOpenMailVM != false) {
      if ((local_240.ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_240.AllocatorInstance.Data);
      local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar14 = *(int *)&pUVar13[2].field_0x10;
      pvVar3 = *(void **)&pUVar13[2].field_0x8;
      local_270.Data.ArrayNum = iVar14;
      if (iVar14 == 0) {
        local_270.Data.ArrayNum = 0;
        local_270.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar14,0,(ForAnyElementType *)&local_270,iVar14,&local_270.Data.ArrayMax);
        memcpy(local_270.Data.AllocatorInstance.Data,pvVar3,(longlong)iVar14 * 2);
      }
      pFVar1 = &this->SelectedMailUID;
      if (pFVar1 != &local_270) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_270.Data.AllocatorInstance.Data;
        (this->SelectedMailUID).Data.ArrayNum = local_270.Data.ArrayNum;
        local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->SelectedMailUID).Data.ArrayMax = local_270.Data.ArrayMax;
        local_270.Data.ArrayNum = 0;
        local_270.Data.ArrayMax = 0;
      }
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
      pUVar12 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_250);
      UDS_MailDataSet::SetSelectedMailUID(pUVar12,pFVar1);
      this->bIsFristOpenMailVM = false;
    }
    iVar14 = local_240.ArrayNum;
    pFVar17 = (FWeakObjectPtr *)(local_240.AllocatorInstance.Data + (longlong)iVar14 * 8);
    FVar18.Data = local_240.AllocatorInstance.Data;
    local_230 = pFVar17;
    while( true ) {
      if (local_240.ArrayNum != iVar14) {
        local_278[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_278);
      }
      if ((FWeakObjectPtr *)FVar18.Data == pFVar17) break;
      local_248 = *(FWeakObjectPtr *)FVar18.Data;
      bVar9 = FWeakObjectPtr::IsValid(&local_248);
      if (bVar9) {
        pUVar13 = FWeakObjectPtr::Get(&local_248);
        local_260.Data = (FScriptContainerElement *)0x0;
        local_258 = *(int *)&pUVar13[2].field_0x10;
        lVar16 = (longlong)local_258;
        pvVar3 = *(void **)&pUVar13[2].field_0x8;
        if (local_258 == 0) {
          local_254 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_258,0,&local_260,local_258,&local_254);
          memcpy(local_260.Data,pvVar3,lVar16 * 2);
        }
        iVar10 = (this->SelectedMailUID).Data.ArrayNum;
        if (iVar10 == local_258) {
          if (iVar10 < 2) {
            bVar9 = true;
          }
          else {
            iVar10 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)(this->SelectedMailUID).Data.AllocatorInstance.Data,
                                (wchar_t *)local_260.Data);
            bVar9 = iVar10 == 0;
          }
        }
        else {
          bVar9 = iVar10 + local_258 == 1;
        }
        this_00 = (UDS_MailData *)FWeakObjectPtr::Get(&local_248);
        UDS_MailData::SetIsSelected(this_00,bVar9);
        this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        MakeContext<FDS_ViewModelContext_Mail>(&local_228);
        pFVar6 = local_228.Object;
        if ((local_228.Object == (FDS_ViewModelContext_Mail *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)&pFVar6->_padding_ = 0x1ec;
        iVar10 = local_258 + -1;
        if (local_258 == 0) {
          iVar10 = 0;
        }
        ::FString::AssignRange(&pFVar6->MailUID,(wchar_t *)local_260.Data,iVar10);
        FVar7.ReferenceController = local_228.SharedReferenceCount.ReferenceController;
        local_188.Object = (FDS_ViewModelContext *)local_228.Object;
        local_188.SharedReferenceCount.ReferenceController =
             local_228.SharedReferenceCount.ReferenceController;
        if (local_228.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(this_01,&local_188);
        MakeContext<FDS_ViewModelContext_Mail>(&local_198);
        pFVar6 = local_198.Object;
        if ((local_198.Object == (FDS_ViewModelContext_Mail *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)&pFVar6->_padding_ = 0x1ef;
        iVar10 = local_258 + -1;
        if (local_258 == 0) {
          iVar10 = 0;
        }
        ::FString::AssignRange(&pFVar6->MailUID,(wchar_t *)local_260.Data,iVar10);
        FVar8.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
        local_178.Object = (FDS_ViewModelContext *)local_198.Object;
        local_178.SharedReferenceCount.ReferenceController =
             local_198.SharedReferenceCount.ReferenceController;
        if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(this_01,&local_178);
        local_218[0] = this_01;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FDS_EntryBindingEventField::Add
                  (&this->MailEntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)local_218);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        pFVar17 = local_230;
        if (local_260.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.Data);
          pFVar17 = local_230;
        }
      }
      FVar18.Data = FVar18.Data + 8;
    }
    local_1d0 = FFieldNotificationClassDescriptor::MailEntryBindingEventField.BitNumber;
    local_1d8 = FFieldNotificationClassDescriptor::MailEntryBindingEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
    iVar14 = FFieldNotificationClassDescriptor::MailListSwitcher.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::MailListSwitcher.FieldName;
    if (this->MailListSwitcher != 0) {
      this->MailListSwitcher = 0;
      local_1c0 = iVar14;
      local_1c8 = FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
    }
    iVar14 = FFieldNotificationClassDescriptor::MailSelectedSwitcher.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::MailSelectedSwitcher.FieldName;
    if ((this->SelectedMailUID).Data.ArrayNum < 2) {
      if (this->MailSelectedSwitcher == 1) goto LAB_14bf166d7;
      this->MailSelectedSwitcher = 1;
      pFVar15 = &local_1a8;
      local_1a8 = FVar5;
      local_1a0 = iVar14;
    }
    else {
      if (this->MailSelectedSwitcher == 0) goto LAB_14bf166d7;
      this->MailSelectedSwitcher = 0;
      local_1b8 = FVar5;
      local_1b0 = iVar14;
    }
    lVar16 = this->_padding_;
  }
  (**(code **)(lVar16 + 0x38))(&this->_padding_,pFVar15);
LAB_14bf166d7:
  if ((FWeakObjectPtr *)local_240.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_240.AllocatorInstance.Data);
  }
  return;
}

// SetMailListSwitcher @ 14bf16710

void __thiscall UDS_VM_Mail::SetMailListSwitcher(UDS_VM_Mail *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MailListSwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MailListSwitcher.FieldName;
  if (this->MailListSwitcher != *param_1) {
    this->MailListSwitcher = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMailSelectedSwitcher @ 14bf16760

void __thiscall UDS_VM_Mail::SetMailSelectedSwitcher(UDS_VM_Mail *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MailSelectedSwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MailSelectedSwitcher.FieldName;
  if (this->MailSelectedSwitcher != *param_1) {
    this->MailSelectedSwitcher = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetStorageExplanation @ 14bf18d30

void __thiscall UDS_VM_Mail::SetStorageExplanation(UDS_VM_Mail *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::StorageExplanation.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::StorageExplanation.FieldName;
  FDS_Text::operator=(&this->StorageExplanation,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bf1df20

void __thiscall UDS_VM_Mail::UnbindModel(UDS_VM_Mail *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  return;
}

// UpdateMailInfo @ 14bf20e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Mail::UpdateMailInfo(UDS_VM_Mail *this,FString *param_1)

{
  UDS_VM_Mail_Info *this_00;
  UDS_VM_MailData *this_01;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  FDS_ViewModelContext_Mail *pFVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  UDS_MailDataSet *this_02;
  UObject *pUVar8;
  FName *pFVar9;
  undefined1 auStackY_328 [32];
  FWeakObjectPtr local_2f8;
  undefined1 local_2f0 [8];
  FName local_2e8;
  int local_2e0;
  FName local_2d8;
  int local_2d0;
  FName local_2c8;
  int local_2c0;
  FName local_2b8;
  int local_2b0;
  TSharedPtr<FDS_ViewModelContext_Mail,1> local_2a8;
  TSharedPtr<FDS_ViewModelContext_Mail,1> local_298;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TSharedPtr<FDS_ViewModelContext,1> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_328;
  ::FString::operator=(&this->SelectedMailUID,param_1);
  iVar4 = FFieldNotificationClassDescriptor::MailSelectedSwitcher.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::MailSelectedSwitcher.FieldName;
  if ((param_1->Data).ArrayNum < 2) {
    if (this->MailSelectedSwitcher == 1) goto LAB_14bf211d9;
    this->MailSelectedSwitcher = 1;
    pFVar9 = &local_2e8;
    local_2e8 = FVar3;
    local_2e0 = iVar4;
  }
  else {
    TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)&local_2f8);
    bVar6 = FWeakObjectPtr::IsValid(&local_2f8);
    if (!bVar6) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,"UDS_VM_Mail::UpdateMailInfo",0x1b,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_268.Ptr,0xd3,L"MailDataSet is invalid");
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
      }
      goto LAB_14bf211d9;
    }
    this_02 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_2f8);
    UDS_MailDataSet::GetMailData(this_02,(FString *)local_2f0);
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_2f0);
    if (!bVar6) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_Mail::UpdateMailInfo",0x1b,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,0xda,L"mailData is invalid");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      goto LAB_14bf211d9;
    }
    if ((this->MailInfo_ViewModel).field0_0x0.DebugPtr != (UDS_VM_Mail_Info *)0x0) {
      MakeContext<FDS_ViewModelContext_Mail>(&local_2a8);
      pFVar5 = local_2a8.Object;
      if (local_2a8.Object == (FDS_ViewModelContext_Mail *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(undefined4 *)&pFVar5->_padding_ = 0x1ed;
      ::FString::operator=(&pFVar5->MailUID,param_1);
      this_00 = (this->MailInfo_ViewModel).field0_0x0.DebugPtr;
      local_288.Object = (FDS_ViewModelContext *)local_2a8.Object;
      local_288.SharedReferenceCount.ReferenceController =
           local_2a8.SharedReferenceCount.ReferenceController;
      if (local_2a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_288);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a8.SharedReferenceCount.ReferenceController);
    }
    if ((this->MailData_ViewModel).field0_0x0.DebugPtr != (UDS_VM_MailData *)0x0) {
      MakeContext<FDS_ViewModelContext_Mail>(&local_298);
      pFVar5 = local_298.Object;
      if (local_298.Object == (FDS_ViewModelContext_Mail *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(undefined4 *)&pFVar5->_padding_ = 0x1ef;
      ::FString::operator=(&pFVar5->MailUID,param_1);
      this_01 = (this->MailData_ViewModel).field0_0x0.DebugPtr;
      local_278.Object = (FDS_ViewModelContext *)local_298.Object;
      local_278.SharedReferenceCount.ReferenceController =
           local_298.SharedReferenceCount.ReferenceController;
      if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_278);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_298.SharedReferenceCount.ReferenceController);
    }
    iVar4 = FFieldNotificationClassDescriptor::MailSelectedSwitcher.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::MailSelectedSwitcher.FieldName;
    if (this->MailSelectedSwitcher != 0) {
      this->MailSelectedSwitcher = 0;
      local_2d0 = iVar4;
      local_2d8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2d8);
    }
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_2f0);
    iVar4 = FFieldNotificationClassDescriptor::ClaimItemBtnVisibility.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::ClaimItemBtnVisibility.FieldName;
    if (pUVar8[4].field_0x12 == '\0') {
      if (this->ClaimItemBtnVisibility == Collapsed) goto LAB_14bf211d9;
      this->ClaimItemBtnVisibility = Collapsed;
      pFVar9 = &local_2b8;
      local_2b8 = FVar3;
      local_2b0 = iVar4;
    }
    else {
      if (this->ClaimItemBtnVisibility == SelfHitTestInvisible) goto LAB_14bf211d9;
      this->ClaimItemBtnVisibility = SelfHitTestInvisible;
      pFVar9 = &local_2c8;
      local_2c8 = FVar3;
      local_2c0 = iVar4;
    }
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar9);
LAB_14bf211d9:
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

