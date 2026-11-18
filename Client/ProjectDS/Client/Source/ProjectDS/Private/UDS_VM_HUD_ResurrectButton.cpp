// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// SetButtonClickEvent_WrapperImpl @ 14b675cd0

void __cdecl
UDS_VM_HUD_ResurrectButton::SetButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  EDS_ResurrectType aEStackX_8 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  aEStackX_8[0] = *(EDS_ResurrectType *)((longlong)param_1 + 0x178);
  if (*(float *)((longlong)param_1 + 0x174) <= *(float *)((longlong)param_1 + 0x168) &&
      *(float *)((longlong)param_1 + 0x168) != *(float *)((longlong)param_1 + 0x174)) {
    TStack_28._0_8_ = 0;
    TStack_28._8_8_ = 0;
    TStack_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x88bb,Alert_System_01,&TStack_28);
    return;
  }
  UDS_ResurrectAbility::RequestResurrect(aEStackX_8);
  return;
}

// StaticClass @ 14b675ce0

UClass * __cdecl UDS_VM_HUD_ResurrectButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_ResurrectButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_ResurrectButton",
               &Z_Registration_Info_UClass_UDS_VM_HUD_ResurrectButton.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_ResurrectButton,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_ResurrectButton>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_ResurrectButton>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_ResurrectButton.InnerSingleton;
}

// UDS_VM_HUD_ResurrectButton @ 14b67a230

UDS_VM_HUD_ResurrectButton * __thiscall
UDS_VM_HUD_ResurrectButton::UDS_VM_HUD_ResurrectButton
          (UDS_VM_HUD_ResurrectButton *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_ResurrectButton__6B_;
  (this->BaseName).StringTableID = 0;
  (this->BaseName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BaseName).StringEnumTableNameID.Number = 0;
  (this->BaseName).DateTime.Ticks = 0;
  (this->BaseName).TimeSpan.Ticks = 0;
  (this->BaseName).TimeExpressionType = None;
  (this->BaseName).IsExpression = false;
  (this->BaseName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseName).UniqueString.Data.ArrayNum = 0;
  (this->BaseName).UniqueString.Data.ArrayMax = 0;
  (this->BaseName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseName).FormatArgs.ArrayNum = 0;
  (this->BaseName).FormatArgs.ArrayMax = 0;
  (this->BaseTitle).StringTableType = None;
  (this->BaseTitle).StringTableID = 0;
  (this->BaseTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BaseTitle).StringEnumTableNameID.Number = 0;
  (this->BaseTitle).DateTime.Ticks = 0;
  (this->BaseTitle).TimeSpan.Ticks = 0;
  (this->BaseTitle).TimeExpressionType = None;
  (this->BaseTitle).IsExpression = false;
  (this->BaseTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseTitle).UniqueString.Data.ArrayNum = 0;
  (this->BaseTitle).UniqueString.Data.ArrayMax = 0;
  (this->BaseTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseTitle).FormatArgs.ArrayNum = 0;
  (this->BaseTitle).FormatArgs.ArrayMax = 0;
  this->IsButtonDisable = false;
  (this->ButtonClickEvent)._padding_ = '\0';
  (this->ButtonClickEvent).bIsCustomSelected = false;
  (this->ButtonClickEvent).bIsLacked = false;
  (this->ButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ButtonClickEvent).Delegate.field_0x10 = 0;
  this->ResurrectEnableTime = 0.0;
  this->DeathKeepTime = 0.0;
  this->WarpLocationID = 0;
  this->ElapsedTime = 0.0;
  (this->BaseName).StringTableType = None;
  return this;
}

// UDS_VM_HUD_ResurrectButton @ 14b67a340

UDS_VM_HUD_ResurrectButton * __thiscall
UDS_VM_HUD_ResurrectButton::UDS_VM_HUD_ResurrectButton
          (UDS_VM_HUD_ResurrectButton *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_ResurrectButton__6B_;
  (this->BaseName).StringTableID = 0;
  (this->BaseName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BaseName).StringEnumTableNameID.Number = 0;
  (this->BaseName).DateTime.Ticks = 0;
  (this->BaseName).TimeSpan.Ticks = 0;
  (this->BaseName).TimeExpressionType = None;
  (this->BaseName).IsExpression = false;
  (this->BaseName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseName).UniqueString.Data.ArrayNum = 0;
  (this->BaseName).UniqueString.Data.ArrayMax = 0;
  (this->BaseName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseName).FormatArgs.ArrayNum = 0;
  (this->BaseName).FormatArgs.ArrayMax = 0;
  (this->BaseTitle).StringTableType = None;
  (this->BaseTitle).StringTableID = 0;
  (this->BaseTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BaseTitle).StringEnumTableNameID.Number = 0;
  (this->BaseTitle).DateTime.Ticks = 0;
  (this->BaseTitle).TimeSpan.Ticks = 0;
  (this->BaseTitle).TimeExpressionType = None;
  (this->BaseTitle).IsExpression = false;
  (this->BaseTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseTitle).UniqueString.Data.ArrayNum = 0;
  (this->BaseTitle).UniqueString.Data.ArrayMax = 0;
  (this->BaseTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseTitle).FormatArgs.ArrayNum = 0;
  (this->BaseTitle).FormatArgs.ArrayMax = 0;
  this->IsButtonDisable = false;
  (this->ButtonClickEvent)._padding_ = '\0';
  (this->ButtonClickEvent).bIsCustomSelected = false;
  (this->ButtonClickEvent).bIsLacked = false;
  (this->ButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ButtonClickEvent).Delegate.field_0x10 = 0;
  this->ResurrectEnableTime = 0.0;
  this->DeathKeepTime = 0.0;
  this->WarpLocationID = 0;
  this->ElapsedTime = 0.0;
  (this->BaseName).StringTableType = None;
  return this;
}

// ~UDS_VM_HUD_ResurrectButton @ 14b67b8b0

void __thiscall
UDS_VM_HUD_ResurrectButton::~UDS_VM_HUD_ResurrectButton(UDS_VM_HUD_ResurrectButton *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_ResurrectButton__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ButtonClickEvent).Delegate);
  pvVar1 = *(void **)&(this->ButtonClickEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ButtonClickEvent).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->BaseTitle).FormatArgs.AllocatorInstance.Data,
             (this->BaseTitle).FormatArgs.ArrayNum);
  pFVar2 = (this->BaseTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BaseTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->BaseName).FormatArgs.AllocatorInstance.Data,
             (this->BaseName).FormatArgs.ArrayNum);
  pFVar2 = (this->BaseName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BaseName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67dfe0

IClassDescriptor * __thiscall
UDS_VM_HUD_ResurrectButton::GetFieldNotificationDescriptor(UDS_VM_HUD_ResurrectButton *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_ResurrectButton::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67eb30

UClass * __cdecl UDS_VM_HUD_ResurrectButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_ResurrectButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_ResurrectButton",
               &Z_Registration_Info_UClass_UDS_VM_HUD_ResurrectButton.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_ResurrectButton,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_ResurrectButton>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_ResurrectButton>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_ResurrectButton.InnerSingleton;
}

// GetTickableTickType @ 14b67f080

ETickableTickType __thiscall
UDS_VM_HUD_ResurrectButton::GetTickableTickType(UDS_VM_HUD_ResurrectButton *this)

{
  return Conditional;
}

// IsUpdate @ 14b67f0d0

bool __thiscall UDS_VM_HUD_ResurrectButton::IsUpdate(UDS_VM_HUD_ResurrectButton *this)

{
  ESlateVisibility EVar1;
  
  EVar1 = UDS_ViewModelBase::GetVisibility((UDS_ViewModelBase *)this);
  return EVar1 != Collapsed;
}

// StaticRegisterNativesUDS_VM_HUD_ResurrectButton @ 14b67f2e0

void __cdecl UDS_VM_HUD_ResurrectButton::StaticRegisterNativesUDS_VM_HUD_ResurrectButton(void)

{
  return;
}

// OnClickResurrectButton @ 14bf62670

void __thiscall
UDS_VM_HUD_ResurrectButton::OnClickResurrectButton
          (UDS_VM_HUD_ResurrectButton *this,FDS_ButtonEventField *param_1)

{
  EDS_ResurrectType local_res8 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_res8[0] = this->ResurrectType;
  if (this->ElapsedTime <= this->ResurrectEnableTime &&
      this->ResurrectEnableTime != this->ElapsedTime) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x88bb,Alert_System_01,&local_28);
    return;
  }
  UDS_ResurrectAbility::RequestResurrect(local_res8);
  return;
}

// OnSetViewModel @ 14bf69310

void __thiscall
UDS_VM_HUD_ResurrectButton::OnSetViewModel
          (UDS_VM_HUD_ResurrectButton *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_ResurrectType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<FDS_ViewModelContext_ResurrectButton,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  SafeCast<FDS_ViewModelContext_ResurrectButton>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_ResurrectButton *)0x0) {
    this->ElapsedTime = 0.0;
    this->ResurrectEnableTime = (local_28.Object)->ResurrectEnableTime;
    this->DeathKeepTime = (local_28.Object)->DeathKeepTime;
    this->WarpLocationID = (local_28.Object)->WarpLocationID;
    EVar1 = (local_28.Object)->ResurrectType;
    this->ResurrectType = EVar1;
    SetupResurrectTypeUI(this,EVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bf721b0

void __thiscall UDS_VM_HUD_ResurrectButton::OnUpdate(UDS_VM_HUD_ResurrectButton *this,float param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x318))();
  if (cVar1 != '\0') {
    this->ElapsedTime = param_1 + this->ElapsedTime;
  }
  return;
}

// RequestResurrect @ 14bf791c0

void __thiscall
UDS_VM_HUD_ResurrectButton::RequestResurrect
          (UDS_VM_HUD_ResurrectButton *this,EDS_ResurrectType param_1)

{
  EDS_ResurrectType local_res10 [24];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_res10[0] = param_1;
  if (this->ElapsedTime <= this->ResurrectEnableTime &&
      this->ResurrectEnableTime != this->ElapsedTime) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x88bb,Alert_System_01,&local_28);
    return;
  }
  UDS_ResurrectAbility::RequestResurrect(local_res10);
  return;
}

// SetBaseIconID @ 14bf795a0

void __thiscall
UDS_VM_HUD_ResurrectButton::SetBaseIconID(UDS_VM_HUD_ResurrectButton *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::BaseIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BaseIconID.FieldName;
  if (this->BaseIconID != param_1) {
    this->BaseIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetBaseName @ 14bf795f0

void __thiscall
UDS_VM_HUD_ResurrectButton::SetBaseName(UDS_VM_HUD_ResurrectButton *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::BaseName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BaseName.FieldName;
  FDS_Text::operator=(&this->BaseName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetBaseTitle @ 14bf79650

void __thiscall
UDS_VM_HUD_ResurrectButton::SetBaseTitle(UDS_VM_HUD_ResurrectButton *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::BaseTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BaseTitle.FieldName;
  FDS_Text::operator=(&this->BaseTitle,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetButtonEnable @ 14bf796b0

void __thiscall
UDS_VM_HUD_ResurrectButton::SetButtonEnable(UDS_VM_HUD_ResurrectButton *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsButtonDisable.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsButtonDisable.FieldName;
  if (this->IsButtonDisable != !param_1) {
    this->IsButtonDisable = !param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetWarpLocationName @ 14bf82210

void __thiscall UDS_VM_HUD_ResurrectButton::SetWarpLocationName(UDS_VM_HUD_ResurrectButton *this)

{
  FName FVar1;
  int iVar2;
  FDS_WarpLocationTableRow *pFVar3;
  FName local_78;
  int local_70;
  FDS_Text local_68;
  
  pFVar3 = FDS_WarpLocationTableRow::Get((longlong)this->WarpLocationID,true);
  if (pFVar3 != (FDS_WarpLocationTableRow *)0x0) {
    local_68.StringTableID = 0;
    local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_68.StringEnumTableNameID.Number = 0;
    local_68.TimeExpressionType = None;
    local_68.IsExpression = false;
    local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.UniqueString.Data.ArrayNum = 0;
    local_68.UniqueString.Data.ArrayMax = 0;
    local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FormatArgs.ArrayNum = 0;
    local_68.FormatArgs.ArrayMax = 0;
    local_68.StringTableType = None;
    local_68.DateTime.Ticks = 0;
    local_68.TimeSpan.Ticks = 0;
    FDS_Text::SetTextFromStringID(&local_68,&pFVar3->ID_Name);
    iVar2 = FFieldNotificationClassDescriptor::BaseName.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::BaseName.FieldName;
    FDS_Text::operator=(&this->BaseName,&local_68);
    local_78 = FVar1;
    local_70 = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
               local_68.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
    }
    if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetupBaseResurrectUI @ 14bf824a0

void __thiscall UDS_VM_HUD_ResurrectButton::SetupBaseResurrectUI(UDS_VM_HUD_ResurrectButton *this)

{
  FName FVar1;
  int iVar2;
  FName local_78;
  int local_70;
  FDS_Text local_68;
  
  iVar2 = FFieldNotificationClassDescriptor::BaseIconID.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BaseIconID.FieldName;
  if (this->BaseIconID != 0x1bc1) {
    this->BaseIconID = 0x1bc1;
    local_70 = iVar2;
    local_78 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  local_68.StringTableType = None;
  local_68.StringTableID = 0;
  local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_68.StringEnumTableNameID.Number = 0;
  local_68.TimeExpressionType = None;
  local_68.IsExpression = false;
  local_68.DateTime.Ticks = 0;
  local_68.TimeSpan.Ticks = 0;
  local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.UniqueString.Data.ArrayNum = 0;
  local_68.UniqueString.Data.ArrayMax = 0;
  local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FormatArgs.ArrayNum = 0;
  local_68.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_68,StringUi,0x7d07);
  iVar2 = FFieldNotificationClassDescriptor::BaseTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BaseTitle.FieldName;
  FDS_Text::operator=(&this->BaseTitle,&local_68);
  local_78 = FVar1;
  local_70 = iVar2;
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
  SetWarpLocationName(this);
  return;
}

// SetupCabinResurrectUI @ 14bf825d0

void __thiscall UDS_VM_HUD_ResurrectButton::SetupCabinResurrectUI(UDS_VM_HUD_ResurrectButton *this)

{
  FName FVar1;
  int iVar2;
  FName local_78;
  int local_70;
  FDS_Text local_68;
  
  iVar2 = FFieldNotificationClassDescriptor::BaseIconID.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BaseIconID.FieldName;
  if (this->BaseIconID != 0x1bc0) {
    this->BaseIconID = 0x1bc0;
    local_70 = iVar2;
    local_78 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  local_68.StringTableType = None;
  local_68.StringTableID = 0;
  local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_68.StringEnumTableNameID.Number = 0;
  local_68.TimeExpressionType = None;
  local_68.IsExpression = false;
  local_68.DateTime.Ticks = 0;
  local_68.TimeSpan.Ticks = 0;
  local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.UniqueString.Data.ArrayNum = 0;
  local_68.UniqueString.Data.ArrayMax = 0;
  local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FormatArgs.ArrayNum = 0;
  local_68.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_68,StringUi,0x7d06);
  iVar2 = FFieldNotificationClassDescriptor::BaseTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BaseTitle.FieldName;
  FDS_Text::operator=(&this->BaseTitle,&local_68);
  local_78 = FVar1;
  local_70 = iVar2;
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
  SetWarpLocationName(this);
  return;
}

// SetupInnResurrectUI @ 14bf82700

void __thiscall UDS_VM_HUD_ResurrectButton::SetupInnResurrectUI(UDS_VM_HUD_ResurrectButton *this)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FDS_ReturnHomeTableRow *pFVar5;
  FWeakObjectPtr local_res8;
  FName local_88;
  int local_80;
  FDS_Text local_78;
  
  iVar2 = FFieldNotificationClassDescriptor::BaseIconID.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BaseIconID.FieldName;
  if (this->BaseIconID != 0x1bbf) {
    this->BaseIconID = 0x1bbf;
    local_80 = iVar2;
    local_88 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  }
  local_78.StringTableType = None;
  local_78.StringTableID = 0;
  local_78.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_78.StringEnumTableNameID.Number = 0;
  local_78.TimeExpressionType = None;
  local_78.IsExpression = false;
  local_78.DateTime.Ticks = 0;
  local_78.TimeSpan.Ticks = 0;
  local_78.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.UniqueString.Data.ArrayNum = 0;
  local_78.UniqueString.Data.ArrayMax = 0;
  local_78.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.FormatArgs.ArrayNum = 0;
  local_78.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_78,StringUi,0x7d05);
  iVar2 = FFieldNotificationClassDescriptor::BaseTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BaseTitle.FieldName;
  FDS_Text::operator=(&this->BaseTitle,&local_78);
  local_88 = FVar1;
  local_80 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data,
             local_78.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_78.FormatArgs.AllocatorInstance.Data);
  }
  if (local_78.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.UniqueString.Data.AllocatorInstance.Data);
  }
  UDS_PlayerData::GetData((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,false);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    pFVar5 = FDS_ReturnHomeTableRow::Get((longlong)*(int *)&pUVar4[6].field_0x20,true);
    if (pFVar5 != (FDS_ReturnHomeTableRow *)0x0) {
      local_78.StringTableType = None;
      local_78.StringTableID = 0;
      local_78.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_78.StringEnumTableNameID.Number = 0;
      local_78.DateTime.Ticks = 0;
      local_78.TimeSpan.Ticks = 0;
      local_78.TimeExpressionType = None;
      local_78.IsExpression = false;
      local_78.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.UniqueString.Data.ArrayNum = 0;
      local_78.UniqueString.Data.ArrayMax = 0;
      local_78.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.FormatArgs.ArrayNum = 0;
      local_78.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_78,&pFVar5->ID_ReturnName);
      iVar2 = FFieldNotificationClassDescriptor::BaseName.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::BaseName.FieldName;
      FDS_Text::operator=(&this->BaseName,&local_78);
      local_88 = FVar1;
      local_80 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data,
                 local_78.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_78.FormatArgs.AllocatorInstance.Data);
      }
      if (local_78.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.UniqueString.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetupInstantResurrectUI @ 14bf82900

void __thiscall
UDS_VM_HUD_ResurrectButton::SetupInstantResurrectUI(UDS_VM_HUD_ResurrectButton *this)

{
  FName FVar1;
  int iVar2;
  FName local_78;
  int local_70;
  FDS_Text local_68;
  
  iVar2 = FFieldNotificationClassDescriptor::BaseIconID.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BaseIconID.FieldName;
  if (this->BaseIconID != 0x1bbd) {
    this->BaseIconID = 0x1bbd;
    local_70 = iVar2;
    local_78 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  local_68.StringTableType = None;
  local_68.StringTableID = 0;
  local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_68.StringEnumTableNameID.Number = 0;
  local_68.TimeExpressionType = None;
  local_68.IsExpression = false;
  local_68.DateTime.Ticks = 0;
  local_68.TimeSpan.Ticks = 0;
  local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.UniqueString.Data.ArrayNum = 0;
  local_68.UniqueString.Data.ArrayMax = 0;
  local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FormatArgs.ArrayNum = 0;
  local_68.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_68,StringUi,0x7d09);
  iVar2 = FFieldNotificationClassDescriptor::BaseTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BaseTitle.FieldName;
  FDS_Text::operator=(&this->BaseTitle,&local_68);
  local_78 = FVar1;
  local_70 = iVar2;
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
  SetWarpLocationName(this);
  return;
}

// SetupResurrectTypeUI @ 14bf82a30

void __thiscall
UDS_VM_HUD_ResurrectButton::SetupResurrectTypeUI
          (UDS_VM_HUD_ResurrectButton *this,EDS_ResurrectType param_1)

{
  FName FVar1;
  int iVar2;
  long64 lVar3;
  FName local_78;
  int local_70;
  FDS_Text local_68;
  
  iVar2 = FFieldNotificationClassDescriptor::BaseIconID.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BaseIconID.FieldName;
  if (param_1 == Base) {
    if (this->BaseIconID != 0x1bc1) {
      this->BaseIconID = 0x1bc1;
      local_70 = iVar2;
      local_78 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    }
    lVar3 = 0x7d07;
  }
  else {
    if (param_1 != Instant) {
      if (param_1 != Inn) {
        return;
      }
      SetupInnResurrectUI(this);
      return;
    }
    if (this->BaseIconID != 0x1bbd) {
      this->BaseIconID = 0x1bbd;
      local_70 = iVar2;
      local_78 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    }
    lVar3 = 0x7d09;
  }
  local_68.StringTableType = None;
  local_68.StringTableID = 0;
  local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_68.StringEnumTableNameID.Number = 0;
  local_68.DateTime.Ticks = 0;
  local_68.TimeSpan.Ticks = 0;
  local_68.TimeExpressionType = None;
  local_68.IsExpression = false;
  local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.UniqueString.Data.ArrayNum = 0;
  local_68.UniqueString.Data.ArrayMax = 0;
  local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FormatArgs.ArrayNum = 0;
  local_68.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_68,StringUi,lVar3);
  iVar2 = FFieldNotificationClassDescriptor::BaseTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::BaseTitle.FieldName;
  FDS_Text::operator=(&this->BaseTitle,&local_68);
  local_78 = FVar1;
  local_70 = iVar2;
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
  SetWarpLocationName(this);
  return;
}

