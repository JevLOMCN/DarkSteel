// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetClickJoinApplyCancel_WrapperImpl @ 14b64e4b0

void __cdecl
UDS_VM_GuildJoinWaitingSlot::SetClickJoinApplyCancel_WrapperImpl(void *param_1,void *param_2)

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
        pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3a9b8);
        UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3a9b9);
        UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        uStack_80._0_4_ = 0;
        pcStack_88 = OnJoinApplyCancelPopup_Cancel;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildJoinWaitingSlot>
                           (&TStack_78,param_1,(pmf_ef988d6f *)&pcStack_88);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
        pcStack_88 = OnJoinApplyCancelPopup_Confrim;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildJoinWaitingSlot>
                           (&TStack_78,param_1,(pmf_ef988d6f *)&pcStack_88);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
      }
    }
  }
  return;
}

// StaticClass @ 14b64e4c0

UClass * __cdecl UDS_VM_GuildJoinWaitingSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildJoinWaitingSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildJoinWaitingSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildJoinWaitingSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildJoinWaitingSlot,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildJoinWaitingSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildJoinWaitingSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildJoinWaitingSlot.InnerSingleton;
}

// UDS_VM_GuildJoinWaitingSlot @ 14b654100

UDS_VM_GuildJoinWaitingSlot * __thiscall
UDS_VM_GuildJoinWaitingSlot::UDS_VM_GuildJoinWaitingSlot
          (UDS_VM_GuildJoinWaitingSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildJoinWaitingSlot__6B_;
  (this->FixedTxt_JoinApplyTimeOut).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinApplyTimeOut).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinApplyTimeOut).DateTime.Ticks = 0;
  (this->FixedTxt_JoinApplyTimeOut).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinApplyTimeOut).TimeExpressionType = None;
  (this->FixedTxt_JoinApplyTimeOut).IsExpression = false;
  (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinApplyTimeOut).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApplyTimeOut).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinApplyTimeOut).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinApplyCancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinApplyCancel).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinApplyCancel).DateTime.Ticks = 0;
  (this->FixedTxt_JoinApplyCancel).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinApplyCancel).TimeExpressionType = None;
  (this->FixedTxt_JoinApplyCancel).IsExpression = false;
  (this->FixedTxt_JoinApplyCancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApplyCancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinApplyCancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinApplyCancel).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApplyCancel).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinApplyCancel).FormatArgs.ArrayMax = 0;
  (this->ClickJoinApplyCancel)._padding_ = '\0';
  (this->ClickJoinApplyCancel).bIsCustomSelected = false;
  (this->ClickJoinApplyCancel).bIsLacked = false;
  (this->ClickJoinApplyCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickJoinApplyCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickJoinApplyCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickJoinApplyCancel).Delegate.field_0x10 = 0;
  (this->VM_RemainTimeProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->M_RemainTimeProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  (this->VM_GuildData).field0_0x0.DebugPtr = (UDS_VM_GuildData *)0x0;
  (this->VM_GuildMark).field0_0x0.DebugPtr = (UDS_VM_GuildMark *)0x0;
  *(undefined8 *)&this->UpdateProgressDelegate = 0;
  *(undefined8 *)&(this->UpdateProgressDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateProgressDelegate).field_0x10 = 0;
  (this->FixedTxt_JoinApplyTimeOut).StringTableType = StringUi;
  (this->FixedTxt_JoinApplyTimeOut).StringTableID = 0x3aa45;
  (this->FixedTxt_JoinApplyCancel).StringTableType = StringUi;
  (this->FixedTxt_JoinApplyCancel).StringTableID = 0x3aa44;
  return this;
}

// UDS_VM_GuildJoinWaitingSlot @ 14b654230

UDS_VM_GuildJoinWaitingSlot * __thiscall
UDS_VM_GuildJoinWaitingSlot::UDS_VM_GuildJoinWaitingSlot
          (UDS_VM_GuildJoinWaitingSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildJoinWaitingSlot__6B_;
  (this->FixedTxt_JoinApplyTimeOut).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinApplyTimeOut).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinApplyTimeOut).DateTime.Ticks = 0;
  (this->FixedTxt_JoinApplyTimeOut).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinApplyTimeOut).TimeExpressionType = None;
  (this->FixedTxt_JoinApplyTimeOut).IsExpression = false;
  (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinApplyTimeOut).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApplyTimeOut).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinApplyTimeOut).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinApplyCancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinApplyCancel).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinApplyCancel).DateTime.Ticks = 0;
  (this->FixedTxt_JoinApplyCancel).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinApplyCancel).TimeExpressionType = None;
  (this->FixedTxt_JoinApplyCancel).IsExpression = false;
  (this->FixedTxt_JoinApplyCancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApplyCancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinApplyCancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinApplyCancel).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApplyCancel).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinApplyCancel).FormatArgs.ArrayMax = 0;
  (this->ClickJoinApplyCancel)._padding_ = '\0';
  (this->ClickJoinApplyCancel).bIsCustomSelected = false;
  (this->ClickJoinApplyCancel).bIsLacked = false;
  (this->ClickJoinApplyCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickJoinApplyCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickJoinApplyCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickJoinApplyCancel).Delegate.field_0x10 = 0;
  (this->VM_RemainTimeProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->M_RemainTimeProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  (this->VM_GuildData).field0_0x0.DebugPtr = (UDS_VM_GuildData *)0x0;
  (this->VM_GuildMark).field0_0x0.DebugPtr = (UDS_VM_GuildMark *)0x0;
  *(undefined8 *)&this->UpdateProgressDelegate = 0;
  *(undefined8 *)&(this->UpdateProgressDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateProgressDelegate).field_0x10 = 0;
  (this->FixedTxt_JoinApplyTimeOut).StringTableType = StringUi;
  (this->FixedTxt_JoinApplyTimeOut).StringTableID = 0x3aa45;
  (this->FixedTxt_JoinApplyCancel).StringTableType = StringUi;
  (this->FixedTxt_JoinApplyCancel).StringTableID = 0x3aa44;
  return this;
}

// ~UDS_VM_GuildJoinWaitingSlot @ 14b655980

void __thiscall
UDS_VM_GuildJoinWaitingSlot::~UDS_VM_GuildJoinWaitingSlot(UDS_VM_GuildJoinWaitingSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildJoinWaitingSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateProgressDelegate);
  pvVar1 = *(void **)&(this->UpdateProgressDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdateProgressDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickJoinApplyCancel).Delegate);
  pvVar1 = *(void **)&(this->ClickJoinApplyCancel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickJoinApplyCancel).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinApplyCancel).FormatArgs.AllocatorInstance.Data
             ,(this->FixedTxt_JoinApplyCancel).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_JoinApplyCancel).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_JoinApplyCancel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_JoinApplyTimeOut).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinApplyTimeOut).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_JoinApplyTimeOut).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6575f0

IClassDescriptor * __thiscall
UDS_VM_GuildJoinWaitingSlot::GetFieldNotificationDescriptor(UDS_VM_GuildJoinWaitingSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildJoinWaitingSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b658090

UClass * __cdecl UDS_VM_GuildJoinWaitingSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildJoinWaitingSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildJoinWaitingSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildJoinWaitingSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildJoinWaitingSlot,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildJoinWaitingSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildJoinWaitingSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildJoinWaitingSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildJoinWaitingSlot @ 14b658370

void __cdecl UDS_VM_GuildJoinWaitingSlot::StaticRegisterNativesUDS_VM_GuildJoinWaitingSlot(void)

{
  return;
}

// BindModel @ 14be75ca0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildJoinWaitingSlot::BindModel(UDS_VM_GuildJoinWaitingSlot *this)

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

// InitViewModel @ 14be8cc30

void __thiscall UDS_VM_GuildJoinWaitingSlot::InitViewModel(UDS_VM_GuildJoinWaitingSlot *this)

{
  return;
}

// OnClickJoinApplyCancel @ 14be95bf0

void __thiscall
UDS_VM_GuildJoinWaitingSlot::OnClickJoinApplyCancel
          (UDS_VM_GuildJoinWaitingSlot *this,FDS_ButtonEventField *param_1)

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
        pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9b8);
        UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9b9);
        UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        uStack_80._0_4_ = 0;
        local_88 = OnJoinApplyCancelPopup_Cancel;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildJoinWaitingSlot>
                           (&local_78,this,(pmf_ef988d6f *)&local_88);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
        local_88 = OnJoinApplyCancelPopup_Confrim;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildJoinWaitingSlot>
                           (&local_78,this,(pmf_ef988d6f *)&local_88);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
      }
    }
  }
  return;
}

// OnJoinApplyCancelPopup_Cancel @ 14be99a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildJoinWaitingSlot::OnJoinApplyCancelPopup_Cancel
          (UDS_VM_GuildJoinWaitingSlot *this,
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

// OnJoinApplyCancelPopup_Confrim @ 14be99a90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildJoinWaitingSlot::OnJoinApplyCancelPopup_Confrim
          (UDS_VM_GuildJoinWaitingSlot *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  FName FVar1;
  int iVar2;
  UDS_WindowManager *this_00;
  float local_res8 [4];
  uint local_res18 [4];
  FName local_18;
  int local_10;
  
  FDS_GuildService::SendGuildJoinApplyCancelRequest(this->GuildUID);
  iVar2 = FFieldNotificationClassDescriptor::DisableJoinApplyCancelButton.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DisableJoinApplyCancelButton.FieldName;
  if (this->DisableJoinApplyCancelButton != true) {
    this->DisableJoinApplyCancelButton = true;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res8[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res18,local_res8);
  }
  return;
}

// OnOpenJoinApplyCancelPopup @ 14be9a4a0

void __thiscall
UDS_VM_GuildJoinWaitingSlot::OnOpenJoinApplyCancelPopup(UDS_VM_GuildJoinWaitingSlot *this)

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
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9b8);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9b9);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80._0_4_ = 0;
      local_88 = OnJoinApplyCancelPopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildJoinWaitingSlot>
                         (&local_78,this,(pmf_ef988d6f *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = OnJoinApplyCancelPopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildJoinWaitingSlot>
                         (&local_78,this,(pmf_ef988d6f *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// OnProgressUpdate @ 14be9b4c0

void __thiscall
UDS_VM_GuildJoinWaitingSlot::OnProgressUpdate
          (UDS_VM_GuildJoinWaitingSlot *this,
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
    local_10 = FFieldNotificationClassDescriptor::DisableJoinApplyCancelButton.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::DisableJoinApplyCancelButton.FieldName;
    if (this->DisableJoinApplyCancelButton != true) {
      this->DisableJoinApplyCancelButton = true;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnSetViewModel @ 14be9f2f0

void __thiscall
UDS_VM_GuildJoinWaitingSlot::OnSetViewModel
          (UDS_VM_GuildJoinWaitingSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FDS_ViewModelContext_GuildData *pFVar3;
  bool bVar4;
  UDS_VM_GuildData *pUVar5;
  FWeakObjectPtr local_res10;
  TSharedPtr<FDS_ViewModelContext_GuildData,1> local_48;
  TSharedPtr<FDS_ViewModelContext_GuildJoinWaitingSlot,1> local_38;
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
  SafeCast<FDS_ViewModelContext_GuildJoinWaitingSlot>(&local_38,&local_28);
  if (local_38.Object == (FDS_ViewModelContext_GuildJoinWaitingSlot *)0x0) goto LAB_14be9f497;
  if ((local_38.Object == (FDS_ViewModelContext_GuildJoinWaitingSlot *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar5 = (this->VM_GuildData).field0_0x0.DebugPtr;
  this->GuildUID = (local_38.Object)->GuildUID;
  if (pUVar5 == (UDS_VM_GuildData *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_GuildData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_GuildData).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 != (UDS_VM_GuildData *)0x0) goto LAB_14be9f3cb;
  }
  else {
LAB_14be9f3cb:
    MakeContext<FDS_ViewModelContext_GuildData>(&local_48);
    pFVar3 = local_48.Object;
    if (local_48.Object != (FDS_ViewModelContext_GuildData *)0x0) {
      if ((local_48.Object == (FDS_ViewModelContext_GuildData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x211;
      UDS_GuildListData::GetData
                ((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
      bVar4 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar4) {
        (pFVar3->guildData).WeakPtr = local_res10;
      }
      pUVar5 = (this->VM_GuildData).field0_0x0.DebugPtr;
      local_18.Object = (FDS_ViewModelContext *)local_48.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  SetVM_Progress(this);
LAB_14be9f497:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDisableJoinApplyCancelButton @ 14beae170

void __thiscall
UDS_VM_GuildJoinWaitingSlot::SetDisableJoinApplyCancelButton
          (UDS_VM_GuildJoinWaitingSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableJoinApplyCancelButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableJoinApplyCancelButton.FieldName;
  if (this->DisableJoinApplyCancelButton != param_1) {
    this->DisableJoinApplyCancelButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTimeLeftWidgetIndex @ 14beb4950

void __thiscall
UDS_VM_GuildJoinWaitingSlot::SetTimeLeftWidgetIndex(UDS_VM_GuildJoinWaitingSlot *this,int param_1)

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

// SetVM_GuildData @ 14beb75d0

void __thiscall UDS_VM_GuildJoinWaitingSlot::SetVM_GuildData(UDS_VM_GuildJoinWaitingSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildData *pFVar2;
  bool bVar3;
  UDS_VM_GuildData *pUVar4;
  FWeakObjectPtr local_res8;
  TSharedPtr<FDS_ViewModelContext_GuildData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildData).field0_0x0.DebugPtr == (UDS_VM_GuildData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_GuildData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildData>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x211;
  UDS_GuildListData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    (pFVar2->guildData).WeakPtr = local_res8;
  }
  pUVar4 = (this->VM_GuildData).field0_0x0.DebugPtr;
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

// SetVM_GuildMark @ 14beb7bc0

void __thiscall UDS_VM_GuildJoinWaitingSlot::SetVM_GuildMark(UDS_VM_GuildJoinWaitingSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildMark *pFVar2;
  bool bVar3;
  UDS_VM_GuildMark *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  TSharedPtr<FDS_ViewModelContext_GuildMark,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildMark).field0_0x0.DebugPtr == (UDS_VM_GuildMark *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMark>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_GuildMark *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildMark).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildMark *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildMark>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildMark *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildMark *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x1f8;
  UDS_GuildListData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkTableID = *(int *)&pUVar5[4].field_0x20;
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkColorTableID = *(int *)&pUVar5[4].field_0x24;
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkBgTableID = *(int *)(pUVar5 + 5);
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkBgColorTableID = *(int *)&pUVar5[5].field_0x4;
  }
  pUVar4 = (this->VM_GuildMark).field0_0x0.DebugPtr;
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

// SetVM_Progress @ 14beb9300

void __thiscall UDS_VM_GuildJoinWaitingSlot::SetVM_Progress(UDS_VM_GuildJoinWaitingSlot *this)

{
  double dVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  int iVar5;
  FDS_ViewModelContext_ModelBase *pFVar6;
  bool bVar7;
  UDS_GuildListData *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  UDS_M_CommonProgress *pUVar11;
  UDS_VM_CommonProgress *pUVar12;
  UObject *pUVar13;
  double dVar14;
  FWeakObjectPtr local_res8;
  UDS_VM_GuildJoinWaitingSlot *local_res10;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  UDS_GuildListData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
  bVar7 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar7) {
    pUVar8 = (UDS_GuildListData *)FWeakObjectPtr::Get(&local_res8);
    bVar7 = UDS_GuildListData::HasTimeLeft(pUVar8);
    iVar5 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.FieldName;
    if (this->TimeLeftWidgetIndex != (bVar7 ^ 1)) {
      this->TimeLeftWidgetIndex = bVar7 ^ 1;
      local_80 = iVar5;
      local_88 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
    pUVar8 = (UDS_GuildListData *)FWeakObjectPtr::Get(&local_res8);
    bVar7 = UDS_GuildListData::HasTimeLeft(pUVar8);
    iVar5 = FFieldNotificationClassDescriptor::DisableJoinApplyCancelButton.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::DisableJoinApplyCancelButton.FieldName;
    if (this->DisableJoinApplyCancelButton != !bVar7) {
      this->DisableJoinApplyCancelButton = !bVar7;
      local_70 = iVar5;
      local_78 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    }
    pUVar8 = (UDS_GuildListData *)FWeakObjectPtr::Get(&local_res8);
    bVar7 = UDS_GuildListData::HasTimeLeft(pUVar8);
    if (bVar7) {
      bVar7 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateProgressDelegate)
      ;
      if (!bVar7) {
        local_68.SharedReferenceCount.ReferenceController._0_4_ = 0;
        local_68.Object = (FDS_ViewModelContext_ModelBase *)OnProgressUpdate;
        local_68.SharedReferenceCount.ReferenceController._4_4_ =
             local_58.SharedReferenceCount.ReferenceController._4_4_;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->UpdateProgressDelegate,(FWriteAccessScope *)&local_48);
        local_30 = &(this->UpdateProgressDelegate).field_0x8;
        puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildJoinWaitingSlot____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar9[3] = 0;
          local_res10 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res10);
          puVar9[4] = local_68.Object;
          puVar9[5] = CONCAT44(local_68.SharedReferenceCount.ReferenceController._4_4_,
                               local_68.SharedReferenceCount.ReferenceController._0_4_);
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
      }
      if ((this->M_RemainTimeProgress).field0_0x0.DebugPtr == (UDS_M_CommonProgress *)0x0) {
        pUVar11 = NewObject<UDS_M_CommonProgress>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar11 != (UDS_M_CommonProgress *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        (this->M_RemainTimeProgress).field0_0x0.DebugPtr = pUVar11;
        UDS_ModelBase::AddUpdateModelDelegate
                  ((UDS_ModelBase *)pUVar11,&this->UpdateProgressDelegate);
      }
      if ((this->VM_RemainTimeProgress).field0_0x0.DebugPtr == (UDS_VM_CommonProgress *)0x0) {
        pUVar12 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonProgress>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar12 != (UDS_VM_CommonProgress *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        (this->VM_RemainTimeProgress).field0_0x0.DebugPtr = pUVar12;
        if (pUVar12 == (UDS_VM_CommonProgress *)0x0) {
          return;
        }
      }
      pUVar11 = (this->M_RemainTimeProgress).field0_0x0.DebugPtr;
      if (pUVar11 != (UDS_M_CommonProgress *)0x0) {
        UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)pUVar11,W_CommonProgress);
        MakeContext<FDS_ViewModelContext_ModelBase>(&local_68);
        pFVar6 = local_68.Object;
        if ((local_68.Object == (FDS_ViewModelContext_ModelBase *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar11 = (this->M_RemainTimeProgress).field0_0x0.DebugPtr,
           pUVar11 != (UDS_M_CommonProgress *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        pTVar3 = (TReferenceControllerBase<1> *)
                 CONCAT44(local_68.SharedReferenceCount.ReferenceController._4_4_,
                          local_68.SharedReferenceCount.ReferenceController._0_4_);
        (pFVar6->Model).field0_0x0 =
             (TObjectPtr<UDS_ModelBase>_u_0)(this->M_RemainTimeProgress).field0_0x0;
        pUVar12 = (this->VM_RemainTimeProgress).field0_0x0.DebugPtr;
        local_58.Object = (FDS_ViewModelContext *)local_68.Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58.SharedReferenceCount.ReferenceController = pTVar3;
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar12,&local_58);
        pUVar11 = (this->M_RemainTimeProgress).field0_0x0.DebugPtr;
        pUVar13 = FWeakObjectPtr::Get(&local_res8);
        dVar1 = *(double *)&pUVar13[9].field_0x8;
        dVar14 = UDS_TimeUtilManager::GetCurrentServerTime();
        UDS_M_CommonProgress::Init(pUVar11,dVar14,dVar1,true,DayHourSec);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
    }
  }
  return;
}

// UnbindModel @ 14bebbf80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildJoinWaitingSlot::UnbindModel(UDS_VM_GuildJoinWaitingSlot *this)

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

