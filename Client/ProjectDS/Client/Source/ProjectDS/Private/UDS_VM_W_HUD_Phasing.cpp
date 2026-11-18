// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetClickAbandonEvent_WrapperImpl @ 14b73de40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_HUD_Phasing::SetClickAbandonEvent_WrapperImpl(void *param_1,void *param_2)

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
              (&TStack_138,"UDS_VM_W_HUD_Phasing::OnClickAbandon",0x24,Yes);
    pwVar6 = L"commonPopupMng is nullptr.";
    uVar5 = 0x3d;
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
      FStack_1a8.DateTime.Ticks = 0;
      FStack_1a8.TimeSpan.Ticks = 0;
      FStack_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1a8.UniqueString.Data.ArrayNum = 0;
      FStack_1a8.UniqueString.Data.ArrayMax = 0;
      FStack_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1a8.FormatArgs.ArrayNum = 0;
      FStack_1a8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&FStack_1a8,StringUi,0xeb3c);
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
      FDS_Text::SetTextFromStringTable(&FStack_1a8,StringUi,0xeb3d);
      UDS_M_CommonPopup::SetMainContent(pUVar3,&FStack_1a8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x66,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      uStack_1b0._0_4_ = 0;
      pcStack_1b8 = OnClickAbandonPopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_W_HUD_Phasing>
                         (&TStack_158,param_1,(pmf_bc8c383b *)&pcStack_1b8);
      UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonCancel,pTVar4);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0xeb8e,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStack_1c8);
      uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
      pcStack_1b8 = OnClickAbandonPopup_Abandon;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_W_HUD_Phasing>
                         (&TStack_158,param_1,(pmf_bc8c383b *)&pcStack_1b8);
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
              (&TStack_138,"UDS_VM_W_HUD_Phasing::OnClickAbandon",0x24,Yes);
    pwVar6 = L"commonPopupModel is nullptr.";
    uVar5 = 0x44;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,uVar5,pwVar6);
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
  return;
}

// StaticClass @ 14b73de50

UClass * __cdecl UDS_VM_W_HUD_Phasing::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_HUD_Phasing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_HUD_Phasing",
               &Z_Registration_Info_UClass_UDS_VM_W_HUD_Phasing.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_HUD_Phasing,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_HUD_Phasing>,
               InternalVTableHelperCtorCaller<UDS_VM_W_HUD_Phasing>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_HUD_Phasing.InnerSingleton;
}

// UDS_VM_W_HUD_Phasing @ 14b740b50

UDS_VM_W_HUD_Phasing * __thiscall
UDS_VM_W_HUD_Phasing::UDS_VM_W_HUD_Phasing(UDS_VM_W_HUD_Phasing *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->MainPanelVisibility = Collapsed;
  this->PhasingTimeLimitSecVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickAbandonEvent)._padding_ = '\0';
  (this->ClickAbandonEvent).bIsCustomSelected = false;
  (this->ClickAbandonEvent).bIsLacked = false;
  (this->ClickAbandonEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ClickAbandonEvent).Delegate = 0;
  this->_padding_ = (longlong)&___7UDS_VM_W_HUD_Phasing__6B_;
  *(undefined8 *)&(this->ClickAbandonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAbandonEvent).Delegate.field_0x10 = 0;
  ::FString::FString(&this->PhasingTimeLimitSecString,"");
  this->PhasingTimeLimitSecWSIndex = 0;
  (this->FixedText_Abandon).StringTableType = StringUi;
  (this->FixedText_Abandon).StringTableID = 0xeb95;
  (this->FixedText_Abandon).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Abandon).StringEnumTableNameID.Number = 0;
  (this->FixedText_Abandon).DateTime.Ticks = 0;
  (this->FixedText_Abandon).TimeSpan.Ticks = 0;
  (this->FixedText_Abandon).TimeExpressionType = None;
  (this->FixedText_Abandon).IsExpression = false;
  (this->FixedText_Abandon).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Abandon).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Abandon).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Abandon).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Abandon).FormatArgs.ArrayNum = 0;
  (this->FixedText_Abandon).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_W_HUD_Phasing @ 14b740c30

UDS_VM_W_HUD_Phasing * __thiscall
UDS_VM_W_HUD_Phasing::UDS_VM_W_HUD_Phasing(UDS_VM_W_HUD_Phasing *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->MainPanelVisibility = Collapsed;
  this->PhasingTimeLimitSecVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickAbandonEvent)._padding_ = '\0';
  (this->ClickAbandonEvent).bIsCustomSelected = false;
  (this->ClickAbandonEvent).bIsLacked = false;
  (this->ClickAbandonEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ClickAbandonEvent).Delegate = 0;
  this->_padding_ = (longlong)&___7UDS_VM_W_HUD_Phasing__6B_;
  *(undefined8 *)&(this->ClickAbandonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAbandonEvent).Delegate.field_0x10 = 0;
  ::FString::FString(&this->PhasingTimeLimitSecString,"");
  this->PhasingTimeLimitSecWSIndex = 0;
  (this->FixedText_Abandon).StringTableType = StringUi;
  (this->FixedText_Abandon).StringTableID = 0xeb95;
  (this->FixedText_Abandon).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Abandon).StringEnumTableNameID.Number = 0;
  (this->FixedText_Abandon).DateTime.Ticks = 0;
  (this->FixedText_Abandon).TimeSpan.Ticks = 0;
  (this->FixedText_Abandon).TimeExpressionType = None;
  (this->FixedText_Abandon).IsExpression = false;
  (this->FixedText_Abandon).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Abandon).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Abandon).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Abandon).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Abandon).FormatArgs.ArrayNum = 0;
  (this->FixedText_Abandon).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_W_HUD_Phasing @ 14b742850

void __thiscall UDS_VM_W_HUD_Phasing::~UDS_VM_W_HUD_Phasing(UDS_VM_W_HUD_Phasing *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_HUD_Phasing__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Abandon).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Abandon).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Abandon).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Abandon).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhasingTimeLimitSecString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAbandonEvent).Delegate);
  pvVar2 = *(void **)&(this->ClickAbandonEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAbandonEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b744b20

IClassDescriptor * __thiscall
UDS_VM_W_HUD_Phasing::GetFieldNotificationDescriptor(UDS_VM_W_HUD_Phasing *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_HUD_Phasing::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b745140

UClass * __cdecl UDS_VM_W_HUD_Phasing::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_HUD_Phasing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_HUD_Phasing",
               &Z_Registration_Info_UClass_UDS_VM_W_HUD_Phasing.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_HUD_Phasing,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_HUD_Phasing>,
               InternalVTableHelperCtorCaller<UDS_VM_W_HUD_Phasing>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_HUD_Phasing.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_HUD_Phasing @ 14b745c00

void __cdecl UDS_VM_W_HUD_Phasing::StaticRegisterNativesUDS_VM_W_HUD_Phasing(void)

{
  return;
}

// BindModel @ 14bf9cc40

void __thiscall UDS_VM_W_HUD_Phasing::BindModel(UDS_VM_W_HUD_Phasing *this)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_PhasingManager *this_00;
  ESlateVisibility EVar4;
  double local_res10 [3];
  FName local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  this_00 = UDS_PhasingManager::GetInst();
  if (this_00 != (UDS_PhasingManager *)0x0) {
    iStack_10 = 0;
    local_18 = (FName)OnPhasingStartOrEnd;
    TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_HUD_Phasing>
              ((TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
                *)&this_00->PhasingStartOrEndDelegate,(UDS_VM_W_HUD_Phasing *)local_res10,
               (pmf_d4ae711b *)this);
    iStack_10 = 0;
    local_18 = (FName)OnChangedPhasingTimeLimitSec;
    TMulticastDelegateRegistration<void___cdecl(double_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_HUD_Phasing>
              ((TMulticastDelegateRegistration<void___cdecl(double_const_&),FDefaultDelegateUserPolicy>
                *)&this_00->ChangedPhasingTimeLimitSecDelegate,(UDS_VM_W_HUD_Phasing *)local_res10,
               (pmf_ec545d05 *)this);
    bVar3 = UDS_PhasingManager::IsPhasingInProgress(this_00);
    iVar2 = FFieldNotificationClassDescriptor::MainPanelVisibility.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::MainPanelVisibility.FieldName;
    EVar4 = Collapsed;
    if (bVar3) {
      EVar4 = SelfHitTestInvisible;
    }
    if (this->MainPanelVisibility != EVar4) {
      this->MainPanelVisibility = EVar4;
      iStack_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    local_res10[0] = UDS_PhasingManager::GetPhasingTimeLimitSec(this_00);
    OnChangedPhasingTimeLimitSec(this,local_res10);
  }
  return;
}

// OnChangedPhasingTimeLimitSec @ 14bfb70f0

void __thiscall
UDS_VM_W_HUD_Phasing::OnChangedPhasingTimeLimitSec(UDS_VM_W_HUD_Phasing *this,double *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FName FVar4;
  int iVar5;
  ForAnyElementType _Src;
  int iVar6;
  FString *pFVar7;
  bool bVar8;
  float fVar9;
  FString local_48;
  FString local_38 [2];
  
  iVar6 = FFieldNotificationClassDescriptor::PhasingTimeLimitSecVisibility.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::PhasingTimeLimitSecVisibility.FieldName;
  if ((double)CONCAT44((uint)((ulonglong)(*param_1 - __real_bff0000000000000) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(*param_1 - __real_bff0000000000000,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee2308c3a) {
    if (this->PhasingTimeLimitSecVisibility == Hidden) {
      return;
    }
    this->PhasingTimeLimitSecVisibility = Hidden;
    local_48.Data.ArrayNum = iVar6;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    return;
  }
  plVar1 = &this->_padding_;
  if (this->PhasingTimeLimitSecVisibility != SelfHitTestInvisible) {
    this->PhasingTimeLimitSecVisibility = SelfHitTestInvisible;
    local_48.Data.ArrayNum = iVar6;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar4;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_48);
  }
  UDS_TimeUtilManager::ConvertStringFromUnixTime(local_38,*param_1,HourSec,false);
  fVar9 = DS_CommonDataHelper::PhasingTimeDirection();
  iVar6 = FFieldNotificationClassDescriptor::PhasingTimeLimitSecWSIndex.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::PhasingTimeLimitSecWSIndex.FieldName;
  if (*param_1 <= (double)fVar9) {
    if (this->PhasingTimeLimitSecWSIndex != 1) {
      this->PhasingTimeLimitSecWSIndex = 1;
      local_48.Data.ArrayNum = iVar6;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar4;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_48);
    }
    ::FString::PrintfImpl(&local_48,L"<%s>%s</>");
    if ((FName)local_38[0].Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
    local_38[0].Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_38[0].Data.ArrayNum = local_48.Data.ArrayNum;
    local_38[0].Data.ArrayMax = local_48.Data.ArrayMax;
  }
  else if (this->PhasingTimeLimitSecWSIndex != 0) {
    this->PhasingTimeLimitSecWSIndex = 0;
    local_48.Data.ArrayNum = iVar6;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar4;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_48);
  }
  iVar5 = FFieldNotificationClassDescriptor::PhasingTimeLimitSecString.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::PhasingTimeLimitSecString.FieldName;
  pFVar7 = &this->PhasingTimeLimitSecString;
  iVar6 = (this->PhasingTimeLimitSecString).Data.ArrayNum;
  if (iVar6 == local_38[0].Data.ArrayNum) {
    if (iVar6 < 2) goto LAB_14bfb72f9;
    iVar6 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                       (wchar_t *)local_38[0].Data.AllocatorInstance.Data);
    bVar8 = iVar6 == 0;
  }
  else {
    bVar8 = iVar6 + local_38[0].Data.ArrayNum == 1;
  }
  iVar6 = local_38[0].Data.ArrayNum;
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  if (!bVar8) {
    if (pFVar7 != local_38) {
      iVar3 = (this->PhasingTimeLimitSecString).Data.ArrayMax;
      piVar2 = &(this->PhasingTimeLimitSecString).Data.ArrayMax;
      (this->PhasingTimeLimitSecString).Data.ArrayNum = local_38[0].Data.ArrayNum;
      if ((local_38[0].Data.ArrayNum == 0) && (iVar3 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_38[0].Data.ArrayNum,iVar3,(ForAnyElementType *)pFVar7,
                   local_38[0].Data.ArrayNum,piVar2);
        if (iVar6 != 0) {
          memcpy((pFVar7->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar6 * 2);
        }
      }
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar4;
    local_48.Data.ArrayNum = iVar5;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_48);
  }
LAB_14bfb72f9:
  if ((FName)local_38[0].Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// OnClickAbandon @ 14bfb7e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_HUD_Phasing::OnClickAbandon(UDS_VM_W_HUD_Phasing *this,FDS_ButtonEventField *param_1)

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
              (&local_138,"UDS_VM_W_HUD_Phasing::OnClickAbandon",0x24,Yes);
    pwVar6 = L"commonPopupMng is nullptr.";
    uVar5 = 0x3d;
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
      local_1a8.DateTime.Ticks = 0;
      local_1a8.TimeSpan.Ticks = 0;
      local_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.UniqueString.Data.ArrayNum = 0;
      local_1a8.UniqueString.Data.ArrayMax = 0;
      local_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.FormatArgs.ArrayNum = 0;
      local_1a8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1a8,StringUi,0xeb3c);
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
      FDS_Text::SetTextFromStringTable(&local_1a8,StringUi,0xeb3d);
      UDS_M_CommonPopup::SetMainContent(pUVar3,&local_1a8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x66,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      uStack_1b0._0_4_ = 0;
      local_1b8 = OnClickAbandonPopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_W_HUD_Phasing>(&local_158,this,(pmf_bc8c383b *)&local_1b8);
      UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonCancel,pTVar4);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0xeb8e,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
      local_1b8 = OnClickAbandonPopup_Abandon;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_W_HUD_Phasing>(&local_158,this,(pmf_bc8c383b *)&local_1b8);
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
              (&local_138,"UDS_VM_W_HUD_Phasing::OnClickAbandon",0x24,Yes);
    pwVar6 = L"commonPopupModel is nullptr.";
    uVar5 = 0x44;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnClickAbandonPopup_Abandon @ 14bfb8180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_HUD_Phasing::OnClickAbandonPopup_Abandon
          (UDS_VM_W_HUD_Phasing *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FDS_PhasingService::SendPhasingLeave();
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_HUD_Phasing::OnClickAbandonPopup_Abandon",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x6d,L"windowMng is nullptr.");
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

// OnClickAbandonPopup_Cancel @ 14bfb82a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_HUD_Phasing::OnClickAbandonPopup_Cancel
          (UDS_VM_W_HUD_Phasing *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

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
                (&local_138,"UDS_VM_W_HUD_Phasing::OnClickAbandonPopup_Cancel",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x5e,L"windowMng is nullptr.");
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

// OnPhasingStartOrEnd @ 14bfc08a0

void __thiscall UDS_VM_W_HUD_Phasing::OnPhasingStartOrEnd(UDS_VM_W_HUD_Phasing *this,bool *param_1)

{
  ESlateVisibility EVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MainPanelVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MainPanelVisibility.FieldName;
  EVar1 = Collapsed;
  if (*param_1 != false) {
    EVar1 = SelfHitTestInvisible;
  }
  if (this->MainPanelVisibility != EVar1) {
    this->MainPanelVisibility = EVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bfce750

void __thiscall
UDS_VM_W_HUD_Phasing::OnSetViewModel
          (UDS_VM_W_HUD_Phasing *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bfe0090

void __thiscall UDS_VM_W_HUD_Phasing::UnbindModel(UDS_VM_W_HUD_Phasing *this)

{
  UDS_PhasingManager *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_PhasingManager::GetInst();
  if (pUVar1 != (UDS_PhasingManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->PhasingStartOrEndDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->ChangedPhasingTimeLimitSecDelegate,this);
  }
  return;
}

