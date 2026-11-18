// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetClickCancelButton_WrapperImpl @ 14b668260

void __cdecl
UDS_VM_GuildSettingInviteSlot::SetClickCancelButton_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_CommonPopupManager *this;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr aFStackX_10 [3];
  code *pcStack_88;
  undefined8 uStack_80;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  TStack_78;
  FDS_Text FStack_60;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_CommonPopupManager::GetInst();
    if (this != (UDS_CommonPopupManager *)0x0) {
      UDS_CommonPopupManager::CreateCommonPopup(this);
      bVar1 = FWeakObjectPtr::IsValid(aFStackX_10);
      if (bVar1) {
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3aa09);
        UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3aa3b);
        UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        uStack_80._0_4_ = 0;
        pcStack_88 = OnInviteCancelPopup_Confrim;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildSettingInviteSlot>
                           (&TStack_78,param_1,(pmf_12f3cf65 *)&pcStack_88);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
        pcStack_88 = OnInviteCancelPopup_Cancel;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildSettingInviteSlot>
                           (&TStack_78,param_1,(pmf_12f3cf65 *)&pcStack_88);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
      }
    }
  }
  return;
}

// StaticClass @ 14b668270

UClass * __cdecl UDS_VM_GuildSettingInviteSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildSettingInviteSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildSettingInviteSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildSettingInviteSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildSettingInviteSlot,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildSettingInviteSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildSettingInviteSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildSettingInviteSlot.InnerSingleton;
}

// UDS_VM_GuildSettingInviteSlot @ 14b66bf40

UDS_VM_GuildSettingInviteSlot * __thiscall
UDS_VM_GuildSettingInviteSlot::UDS_VM_GuildSettingInviteSlot
          (UDS_VM_GuildSettingInviteSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingInviteSlot__6B_;
  (this->FixedTxt_TimeOut).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_TimeOut).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_TimeOut).DateTime.Ticks = 0;
  (this->FixedTxt_TimeOut).TimeSpan.Ticks = 0;
  (this->FixedTxt_TimeOut).TimeExpressionType = None;
  (this->FixedTxt_TimeOut).IsExpression = false;
  (this->FixedTxt_TimeOut).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_TimeOut).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_TimeOut).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_TimeOut).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_TimeOut).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_TimeOut).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_CancelButton).DateTime.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeExpressionType = None;
  (this->FixedTxt_CancelButton).IsExpression = false;
  (this->FixedTxt_CancelButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayMax = 0;
  (this->ClickCancelButton)._padding_ = '\0';
  (this->ClickCancelButton).bIsCustomSelected = false;
  (this->ClickCancelButton).bIsLacked = false;
  (this->ClickCancelButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancelButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCancelButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancelButton).Delegate.field_0x10 = 0;
  (this->VM_TimeProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->VM_GuildMemberData).field0_0x0.DebugPtr = (UDS_VM_GuildMemberData *)0x0;
  (this->M_TimeProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  *(undefined8 *)&this->UpdateProgressDelegate = 0;
  *(undefined8 *)&(this->UpdateProgressDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateProgressDelegate).field_0x10 = 0;
  (this->MemberData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FixedTxt_TimeOut).StringTableType = StringUi;
  (this->FixedTxt_TimeOut).StringTableID = 0x3aa45;
  (this->FixedTxt_CancelButton).StringTableType = StringUi;
  (this->FixedTxt_CancelButton).StringTableID = 0x3aa08;
  return this;
}

// UDS_VM_GuildSettingInviteSlot @ 14b66c070

UDS_VM_GuildSettingInviteSlot * __thiscall
UDS_VM_GuildSettingInviteSlot::UDS_VM_GuildSettingInviteSlot
          (UDS_VM_GuildSettingInviteSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingInviteSlot__6B_;
  (this->FixedTxt_TimeOut).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_TimeOut).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_TimeOut).DateTime.Ticks = 0;
  (this->FixedTxt_TimeOut).TimeSpan.Ticks = 0;
  (this->FixedTxt_TimeOut).TimeExpressionType = None;
  (this->FixedTxt_TimeOut).IsExpression = false;
  (this->FixedTxt_TimeOut).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_TimeOut).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_TimeOut).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_TimeOut).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_TimeOut).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_TimeOut).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_CancelButton).DateTime.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeExpressionType = None;
  (this->FixedTxt_CancelButton).IsExpression = false;
  (this->FixedTxt_CancelButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayMax = 0;
  (this->ClickCancelButton)._padding_ = '\0';
  (this->ClickCancelButton).bIsCustomSelected = false;
  (this->ClickCancelButton).bIsLacked = false;
  (this->ClickCancelButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancelButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCancelButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancelButton).Delegate.field_0x10 = 0;
  (this->VM_TimeProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->VM_GuildMemberData).field0_0x0.DebugPtr = (UDS_VM_GuildMemberData *)0x0;
  (this->M_TimeProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  *(undefined8 *)&this->UpdateProgressDelegate = 0;
  *(undefined8 *)&(this->UpdateProgressDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateProgressDelegate).field_0x10 = 0;
  (this->MemberData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FixedTxt_TimeOut).StringTableType = StringUi;
  (this->FixedTxt_TimeOut).StringTableID = 0x3aa45;
  (this->FixedTxt_CancelButton).StringTableType = StringUi;
  (this->FixedTxt_CancelButton).StringTableID = 0x3aa08;
  return this;
}

// ~UDS_VM_GuildSettingInviteSlot @ 14b66e7c0

void __thiscall
UDS_VM_GuildSettingInviteSlot::~UDS_VM_GuildSettingInviteSlot(UDS_VM_GuildSettingInviteSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingInviteSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateProgressDelegate);
  pvVar1 = *(void **)&(this->UpdateProgressDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdateProgressDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancelButton).Delegate);
  pvVar1 = *(void **)&(this->ClickCancelButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancelButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_CancelButton).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_CancelButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_TimeOut).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_TimeOut).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_TimeOut).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_TimeOut).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b671570

IClassDescriptor * __thiscall
UDS_VM_GuildSettingInviteSlot::GetFieldNotificationDescriptor(UDS_VM_GuildSettingInviteSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildSettingInviteSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b671da0

UClass * __cdecl UDS_VM_GuildSettingInviteSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildSettingInviteSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildSettingInviteSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildSettingInviteSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildSettingInviteSlot,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildSettingInviteSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildSettingInviteSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildSettingInviteSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildSettingInviteSlot @ 14b672ab0

void __cdecl UDS_VM_GuildSettingInviteSlot::StaticRegisterNativesUDS_VM_GuildSettingInviteSlot(void)

{
  return;
}

// BindModel @ 14be76270

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildSettingInviteSlot::BindModel(UDS_VM_GuildSettingInviteSlot *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// InitViewModel @ 14be8cd30

void __thiscall UDS_VM_GuildSettingInviteSlot::InitViewModel(UDS_VM_GuildSettingInviteSlot *this)

{
  return;
}

// OnClickCancelButton @ 14be94140

void __thiscall
UDS_VM_GuildSettingInviteSlot::OnClickCancelButton
          (UDS_VM_GuildSettingInviteSlot *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr local_res10 [3];
  code *local_88;
  undefined8 uStack_80;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_78;
  FDS_Text local_60;
  
  if (param_1->bIsCustomDisabled != true) {
    this_00 = UDS_CommonPopupManager::GetInst();
    if (this_00 != (UDS_CommonPopupManager *)0x0) {
      UDS_CommonPopupManager::CreateCommonPopup(this_00);
      bVar1 = FWeakObjectPtr::IsValid(local_res10);
      if (bVar1) {
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3aa09);
        UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3aa3b);
        UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        uStack_80._0_4_ = 0;
        local_88 = OnInviteCancelPopup_Confrim;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildSettingInviteSlot>
                           (&local_78,this,(pmf_12f3cf65 *)&local_88);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
        local_88 = OnInviteCancelPopup_Cancel;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildSettingInviteSlot>
                           (&local_78,this,(pmf_12f3cf65 *)&local_88);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
      }
    }
  }
  return;
}

// OnInviteCancelPopup_Cancel @ 14be99830

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSettingInviteSlot::OnInviteCancelPopup_Cancel
          (UDS_VM_GuildSettingInviteSlot *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  }
  return;
}

// OnInviteCancelPopup_Confrim @ 14be99870

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSettingInviteSlot::OnInviteCancelPopup_Confrim
          (UDS_VM_GuildSettingInviteSlot *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_GuildManager *this_00;
  UObject *pUVar4;
  UDS_WindowManager *this_01;
  float local_res8 [2];
  uint local_res18 [4];
  FName local_18;
  int local_10;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->MemberData).WeakPtr);
  iVar2 = FFieldNotificationClassDescriptor::DisableCancelButton.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DisableCancelButton.FieldName;
  if (bVar3) {
    if (this->DisableCancelButton != true) {
      this->DisableCancelButton = true;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    this_00 = UDS_GuildManager::GetInst();
    if (this_00 != (UDS_GuildManager *)0x0) {
      pUVar4 = FWeakObjectPtr::Get(&(this->MemberData).WeakPtr);
      UDS_GuildManager::SendGuildInviteCancel(this_00,*(long64 *)&pUVar4[1].field_0x8);
    }
    this_01 = UDS_WindowManager::GetInst();
    if (this_01 != (UDS_WindowManager *)0x0) {
      local_res8[0] = 0.0;
      local_res18[0] = 0;
      UDS_WindowManager::CloseWindow(this_01,PopupCommon,local_res18,local_res8);
    }
  }
  return;
}

// OnProgressUpdate @ 14be9b570

void __thiscall
UDS_VM_GuildSettingInviteSlot::OnProgressUpdate
          (UDS_VM_GuildSettingInviteSlot *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res10 [3];
  FName local_18;
  int local_10;
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  local_10 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.FieldName;
  if (bVar1) {
    if (this->TimeLeftWidgetIndex != 1) {
      this->TimeLeftWidgetIndex = 1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnSetViewModel @ 14bea19e0

void __thiscall
UDS_VM_GuildSettingInviteSlot::OnSetViewModel
          (UDS_VM_GuildSettingInviteSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FDS_ViewModelContext_GuildMemberData *pFVar3;
  bool bVar4;
  UDS_VM_GuildMemberData *pUVar5;
  TSharedPtr<FDS_ViewModelContext_GuildSettingInviteSlot,1> local_48;
  TSharedPtr<FDS_ViewModelContext_GuildMemberData,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_GuildSettingInviteSlot>(&local_48,&local_28);
  if (local_48.Object == (FDS_ViewModelContext_GuildSettingInviteSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    goto LAB_14bea1b8f;
  }
  if ((local_48.Object == (FDS_ViewModelContext_GuildSettingInviteSlot *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->MemberData).WeakPtr = ((local_48.Object)->MemberData).WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&(this->MemberData).WeakPtr);
  if (bVar4) {
    if ((this->VM_GuildMemberData).field0_0x0.DebugPtr == (UDS_VM_GuildMemberData *)0x0) {
      pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMemberData>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_VM_GuildMemberData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->VM_GuildMemberData).field0_0x0.DebugPtr = pUVar5;
      if (pUVar5 != (UDS_VM_GuildMemberData *)0x0) goto LAB_14bea1adf;
    }
    else {
LAB_14bea1adf:
      MakeContext<FDS_ViewModelContext_GuildMemberData>(&local_38);
      pFVar3 = local_38.Object;
      if (local_38.Object != (FDS_ViewModelContext_GuildMemberData *)0x0) {
        if ((local_38.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)&pFVar3->_padding_ = 0x212;
        (pFVar3->MemberData).WeakPtr = (this->MemberData).WeakPtr;
        pUVar5 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
        local_18.Object = (FDS_ViewModelContext *)local_38.Object;
        local_18.SharedReferenceCount.ReferenceController =
             local_38.SharedReferenceCount.ReferenceController;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_18);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    SetVM_TimeProgress(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
LAB_14bea1b8f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenInviteCancelPopup @ 14beab060

void __thiscall
UDS_VM_GuildSettingInviteSlot::OpenInviteCancelPopup(UDS_VM_GuildSettingInviteSlot *this)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr local_res10 [3];
  code *local_88;
  undefined8 uStack_80;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_78;
  FDS_Text local_60;
  
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 != (UDS_CommonPopupManager *)0x0) {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3aa09);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3aa3b);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80._0_4_ = 0;
      local_88 = OnInviteCancelPopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildSettingInviteSlot>
                         (&local_78,this,(pmf_12f3cf65 *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = OnInviteCancelPopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildSettingInviteSlot>
                         (&local_78,this,(pmf_12f3cf65 *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// SetDisableCancelButton @ 14beadf80

void __thiscall
UDS_VM_GuildSettingInviteSlot::SetDisableCancelButton
          (UDS_VM_GuildSettingInviteSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableCancelButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableCancelButton.FieldName;
  if (this->DisableCancelButton != param_1) {
    this->DisableCancelButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTimeLeftWidgetIndex @ 14beb49a0

void __thiscall
UDS_VM_GuildSettingInviteSlot::SetTimeLeftWidgetIndex
          (UDS_VM_GuildSettingInviteSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.FieldName;
  if (this->TimeLeftWidgetIndex != param_1) {
    this->TimeLeftWidgetIndex = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_GuildMemberData @ 14beb8460

void __thiscall
UDS_VM_GuildSettingInviteSlot::SetVM_GuildMemberData(UDS_VM_GuildSettingInviteSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildMemberData *pFVar2;
  bool bVar3;
  UDS_VM_GuildMemberData *pUVar4;
  TSharedPtr<FDS_ViewModelContext_GuildMemberData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildMemberData).field0_0x0.DebugPtr == (UDS_VM_GuildMemberData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMemberData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_GuildMemberData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildMemberData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildMemberData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildMemberData>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x212;
  (pFVar2->MemberData).WeakPtr = (this->MemberData).WeakPtr;
  pUVar4 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// SetVM_TimeProgress @ 14beb9fb0

void __thiscall
UDS_VM_GuildSettingInviteSlot::SetVM_TimeProgress(UDS_VM_GuildSettingInviteSlot *this)

{
  TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr> *this_00;
  undefined1 *puVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  int iVar5;
  FDS_ViewModelContext_ModelBase *pFVar6;
  bool bVar7;
  char cVar8;
  UDS_GuildMemberData *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  UDS_M_CommonProgress *pUVar12;
  UDS_VM_CommonProgress *pUVar13;
  double dVar14;
  UDS_VM_GuildSettingInviteSlot *local_res8;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FReadAccessScope local_68;
  FDestructionSentinel local_50;
  undefined1 *local_38;
  
  this_00 = &this->MemberData;
  bVar7 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar7) {
    pUVar9 = (UDS_GuildMemberData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar7 = UDS_GuildMemberData::HasPendingLeftTime(pUVar9);
    iVar5 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.FieldName;
    if (this->TimeLeftWidgetIndex != (bVar7 ^ 1)) {
      this->TimeLeftWidgetIndex = bVar7 ^ 1;
      local_a0 = iVar5;
      local_a8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    }
    iVar5 = FFieldNotificationClassDescriptor::DisableCancelButton.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::DisableCancelButton.FieldName;
    if (this->DisableCancelButton != false) {
      this->DisableCancelButton = false;
      local_90 = iVar5;
      local_98 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->UpdateProgressDelegate,&local_68);
    puVar1 = &(this->UpdateProgressDelegate).field_0x8;
    if (((*(int *)&(this->UpdateProgressDelegate).field_0x10 == 0) ||
        (*(longlong **)puVar1 == (longlong *)0x0)) ||
       (cVar8 = (**(code **)(**(longlong **)puVar1 + 0x38))(), cVar8 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      local_88.SharedReferenceCount.ReferenceController._0_4_ = 0;
      local_88.Object = (FDS_ViewModelContext_ModelBase *)OnProgressUpdate;
      local_88.SharedReferenceCount.ReferenceController._4_4_ =
           local_78.SharedReferenceCount.ReferenceController._4_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->UpdateProgressDelegate,(FWriteAccessScope *)&local_50);
      local_38 = puVar1;
      puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSettingInviteSlot____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_GuildSettingInviteSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar10[3] = 0;
        local_res8 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_GuildSettingInviteSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res8);
        puVar10[4] = local_88.Object;
        puVar10[5] = CONCAT44(local_88.SharedReferenceCount.ReferenceController._4_4_,
                              local_88.SharedReferenceCount.ReferenceController._0_4_);
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
    }
    if ((this->M_TimeProgress).field0_0x0.DebugPtr == (UDS_M_CommonProgress *)0x0) {
      pUVar12 = NewObject<UDS_M_CommonProgress>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 != (UDS_M_CommonProgress *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      (this->M_TimeProgress).field0_0x0.DebugPtr = pUVar12;
      UDS_ModelBase::AddUpdateModelDelegate((UDS_ModelBase *)pUVar12,&this->UpdateProgressDelegate);
    }
    if ((this->VM_TimeProgress).field0_0x0.DebugPtr == (UDS_VM_CommonProgress *)0x0) {
      pUVar13 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonProgress>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar13 != (UDS_VM_CommonProgress *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      (this->VM_TimeProgress).field0_0x0.DebugPtr = pUVar13;
      if (pUVar13 == (UDS_VM_CommonProgress *)0x0) {
        return;
      }
    }
    pUVar12 = (this->M_TimeProgress).field0_0x0.DebugPtr;
    if (pUVar12 != (UDS_M_CommonProgress *)0x0) {
      UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)pUVar12,W_CommonProgress);
      MakeContext<FDS_ViewModelContext_ModelBase>(&local_88);
      pFVar6 = local_88.Object;
      if ((local_88.Object == (FDS_ViewModelContext_ModelBase *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 = (this->M_TimeProgress).field0_0x0.DebugPtr,
         pUVar12 != (UDS_M_CommonProgress *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      pTVar3 = (TReferenceControllerBase<1> *)
               CONCAT44(local_88.SharedReferenceCount.ReferenceController._4_4_,
                        local_88.SharedReferenceCount.ReferenceController._0_4_);
      (pFVar6->Model).field0_0x0 = (TObjectPtr<UDS_ModelBase>_u_0)(this->M_TimeProgress).field0_0x0;
      pUVar13 = (this->VM_TimeProgress).field0_0x0.DebugPtr;
      local_78.Object = (FDS_ViewModelContext *)local_88.Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78.SharedReferenceCount.ReferenceController = pTVar3;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar13,&local_78);
      pUVar12 = (this->M_TimeProgress).field0_0x0.DebugPtr;
      pUVar9 = (UDS_GuildMemberData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar7 = UDS_GuildMemberData::HasPendingLeftTime(pUVar9);
      dVar14 = UDS_TimeUtilManager::GetCurrentServerTime();
      UDS_M_CommonProgress::Init(pUVar12,dVar14,(double)bVar7,true,DayHourSec);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  return;
}

// UnbindModel @ 14bebc230

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildSettingInviteSlot::UnbindModel(UDS_VM_GuildSettingInviteSlot *this)

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

