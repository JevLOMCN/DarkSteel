// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// SetClickButton_WrapperImpl @ 14b667be0

void __cdecl UDS_VM_HUD_CampMenuBtn::SetClickButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_CampEvent *pUVar1;
  
  pUVar1 = UDS_CampEvent::GetEvent();
  if (pUVar1 != (UDS_CampEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast
              (&pUVar1->OnClickCampMenuDelegate,*(int *)((longlong)param_1 + 0x118));
    return;
  }
  return;
}

// StaticClass @ 14b667bf0

UClass * __cdecl UDS_VM_HUD_CampMenuBtn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_CampMenuBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_CampMenuBtn",
               &Z_Registration_Info_UClass_UDS_VM_HUD_CampMenuBtn.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_CampMenuBtn,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_CampMenuBtn>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_CampMenuBtn>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_CampMenuBtn.InnerSingleton;
}

// UDS_VM_HUD_CampMenuBtn @ 14b66d660

UDS_VM_HUD_CampMenuBtn * __thiscall
UDS_VM_HUD_CampMenuBtn::UDS_VM_HUD_CampMenuBtn(UDS_VM_HUD_CampMenuBtn *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_CampMenuBtn__6B_;
  this->ButtonIconID = 0;
  (this->ButtonName).StringTableType = None;
  (this->ButtonName).StringTableID = 0;
  (this->ButtonName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ButtonName).StringEnumTableNameID.Number = 0;
  (this->ButtonName).DateTime.Ticks = 0;
  (this->ButtonName).TimeSpan.Ticks = 0;
  (this->ButtonName).TimeExpressionType = None;
  (this->ButtonName).IsExpression = false;
  (this->ButtonName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonName).UniqueString.Data.ArrayNum = 0;
  (this->ButtonName).UniqueString.Data.ArrayMax = 0;
  (this->ButtonName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonName).FormatArgs.ArrayNum = 0;
  (this->ButtonName).FormatArgs.ArrayMax = 0;
  (this->ClickButton)._padding_ = '\0';
  (this->ClickButton).bIsCustomSelected = false;
  (this->ClickButton).bIsLacked = false;
  (this->ClickButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickButton).Delegate = 0;
  *(undefined8 *)&(this->ClickButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButton).Delegate.field_0x10 = 0;
  return this;
}

// UDS_VM_HUD_CampMenuBtn @ 14b66d710

UDS_VM_HUD_CampMenuBtn * __thiscall
UDS_VM_HUD_CampMenuBtn::UDS_VM_HUD_CampMenuBtn
          (UDS_VM_HUD_CampMenuBtn *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_CampMenuBtn__6B_;
  this->ButtonIconID = 0;
  (this->ButtonName).StringTableType = None;
  (this->ButtonName).StringTableID = 0;
  (this->ButtonName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ButtonName).StringEnumTableNameID.Number = 0;
  (this->ButtonName).DateTime.Ticks = 0;
  (this->ButtonName).TimeSpan.Ticks = 0;
  (this->ButtonName).TimeExpressionType = None;
  (this->ButtonName).IsExpression = false;
  (this->ButtonName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonName).UniqueString.Data.ArrayNum = 0;
  (this->ButtonName).UniqueString.Data.ArrayMax = 0;
  (this->ButtonName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonName).FormatArgs.ArrayNum = 0;
  (this->ButtonName).FormatArgs.ArrayMax = 0;
  (this->ClickButton)._padding_ = '\0';
  (this->ClickButton).bIsCustomSelected = false;
  (this->ClickButton).bIsLacked = false;
  (this->ClickButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickButton).Delegate = 0;
  *(undefined8 *)&(this->ClickButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButton).Delegate.field_0x10 = 0;
  return this;
}

// ~UDS_VM_HUD_CampMenuBtn @ 14b66f0b0

void __thiscall UDS_VM_HUD_CampMenuBtn::~UDS_VM_HUD_CampMenuBtn(UDS_VM_HUD_CampMenuBtn *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_CampMenuBtn__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickButton).Delegate);
  pvVar1 = *(void **)&(this->ClickButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ButtonName).FormatArgs.AllocatorInstance.Data,
             (this->ButtonName).FormatArgs.ArrayNum);
  pFVar2 = (this->ButtonName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ButtonName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6718f0

IClassDescriptor * __thiscall
UDS_VM_HUD_CampMenuBtn::GetFieldNotificationDescriptor(UDS_VM_HUD_CampMenuBtn *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_CampMenuBtn::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6723a0

UClass * __cdecl UDS_VM_HUD_CampMenuBtn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_CampMenuBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_CampMenuBtn",
               &Z_Registration_Info_UClass_UDS_VM_HUD_CampMenuBtn.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_CampMenuBtn,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_CampMenuBtn>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_CampMenuBtn>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_CampMenuBtn.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_CampMenuBtn @ 14b672b90

void __cdecl UDS_VM_HUD_CampMenuBtn::StaticRegisterNativesUDS_VM_HUD_CampMenuBtn(void)

{
  return;
}

// OnClickButton @ 14be93a30

void __thiscall
UDS_VM_HUD_CampMenuBtn::OnClickButton(UDS_VM_HUD_CampMenuBtn *this,FDS_ButtonEventField *param_1)

{
  UDS_CampEvent *pUVar1;
  
  pUVar1 = UDS_CampEvent::GetEvent();
  if (pUVar1 != (UDS_CampEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast(&pUVar1->OnClickCampMenuDelegate,this->CampMenu);
    return;
  }
  return;
}

// OnSetViewModel @ 14bea23c0

void __thiscall
UDS_VM_HUD_CampMenuBtn::OnSetViewModel
          (UDS_VM_HUD_CampMenuBtn *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_CampMenu EVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  int iVar4;
  long64 lVar5;
  int iVar6;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  TSharedPtr<FDS_ViewModelContext_CampMenuButton,1> local_98;
  FDS_Text local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_38 [2];
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_38[0].Object = param_1->Object;
  local_38[0].SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CampMenuButton>(&local_98,local_38);
  if (local_98.Object != (FDS_ViewModelContext_CampMenuButton *)0x0) {
    EVar1 = (local_98.Object)->CampMenu;
    lVar5 = 0;
    iVar6 = 0;
    this->CampMenu = EVar1;
    iVar4 = FFieldNotificationClassDescriptor::ButtonIconID.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::ButtonIconID.FieldName;
    if (EVar1 == Cook) {
      iVar6 = 0x2bfe9;
      lVar5 = 0x4c6b3;
    }
    else if (EVar1 == ItemCraft) {
      iVar6 = 0x2bfed;
      lVar5 = 0x4c6ba;
    }
    else if (EVar1 == Remove) {
      iVar6 = 0x2bfeb;
      lVar5 = 0x4c6b5;
    }
    else if (EVar1 == Exit) {
      iVar6 = 0x2bfec;
      lVar5 = 0x4c6b6;
    }
    if (this->ButtonIconID != iVar6) {
      this->ButtonIconID = iVar6;
      local_b0 = iVar4;
      local_b8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    }
    local_88.StringTableType = None;
    local_88.StringTableID = 0;
    local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_88.StringEnumTableNameID.Number = 0;
    local_88.TimeExpressionType = None;
    local_88.DateTime.Ticks = 0;
    local_88.TimeSpan.Ticks = 0;
    local_88.IsExpression = false;
    local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.UniqueString.Data.ArrayNum = 0;
    local_88.UniqueString.Data.ArrayMax = 0;
    local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.FormatArgs.ArrayNum = 0;
    local_88.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_88,StringUi,lVar5);
    iVar4 = FFieldNotificationClassDescriptor::ButtonName.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::ButtonName.FieldName;
    FDS_Text::operator=(&this->ButtonName,&local_88);
    local_a8 = FVar3;
    local_a0 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
               local_88.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_88.FormatArgs.AllocatorInstance.Data);
    }
    if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetButtonIconID @ 14bead570

void __thiscall UDS_VM_HUD_CampMenuBtn::SetButtonIconID(UDS_VM_HUD_CampMenuBtn *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ButtonIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ButtonIconID.FieldName;
  if (this->ButtonIconID != param_1) {
    this->ButtonIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetButtonName @ 14bead5c0

void __thiscall
UDS_VM_HUD_CampMenuBtn::SetButtonName(UDS_VM_HUD_CampMenuBtn *this,FDS_Text *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  int iVar3;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::ButtonName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ButtonName.FieldName;
  FDS_Text::operator=(&this->ButtonName,param_1);
  local_18 = FVar2;
  local_10 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data,
             (param_1->FormatArgs).ArrayNum);
  pFVar1 = (param_1->FormatArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

