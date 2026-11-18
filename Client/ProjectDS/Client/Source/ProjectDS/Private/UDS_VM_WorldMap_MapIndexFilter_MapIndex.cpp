// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetOpenMapIndexFilterList_WrapperImpl @ 14b70b360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_WorldMap_MapIndexFilter_MapIndex::SetOpenMapIndexFilterList_WrapperImpl
          (void *param_1,void *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WorldMapLocalSave *this;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr aFStack_158 [2];
  FName FStack_148;
  int iStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  *(bool *)((longlong)param_1 + 0xc1) = *(char *)((longlong)param_1 + 0xc1) == '\0';
  UDS_WorldMapLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(aFStack_158);
  if (bVar1) {
    this = (UDS_WorldMapLocalSave *)FWeakObjectPtr::Get(aFStack_158);
    UDS_WorldMapLocalSave::ChangeMapIndexGroupChecked
              (this,*(int *)((longlong)param_1 + 0x118),*(bool *)((longlong)param_1 + 0xc1));
    iStack_140 = FFieldNotificationClassDescriptor::IsChecked.BitNumber;
    FStack_148 = FFieldNotificationClassDescriptor::IsChecked.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_148);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WorldMap_MapIndexFilter_MapIndex::OnCheckStateChanged",0x3c,Yes
                );
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x81,L"localSave IsValid = false");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// StaticClass @ 14b70b370

UClass * __cdecl UDS_VM_WorldMap_MapIndexFilter_MapIndex::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_MapIndexFilter_MapIndex.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_MapIndexFilter_MapIndex",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_MapIndexFilter_MapIndex.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_MapIndexFilter_MapIndex,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_MapIndexFilter_MapIndex>
               ,InternalVTableHelperCtorCaller<UDS_VM_WorldMap_MapIndexFilter_MapIndex>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_MapIndexFilter_MapIndex.InnerSingleton;
}

// UDS_VM_WorldMap_MapIndexFilter_MapIndex @ 14b711f00

UDS_VM_WorldMap_MapIndexFilter_MapIndex * __thiscall
UDS_VM_WorldMap_MapIndexFilter_MapIndex::UDS_VM_WorldMap_MapIndexFilter_MapIndex
          (UDS_VM_WorldMap_MapIndexFilter_MapIndex *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->HoverUIVisibility = Collapsed;
  this->IsChecked = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_MapIndexFilter_MapIndex__6B_;
  *(undefined8 *)&(this->OpenMapIndexFilterList).Delegate = 0;
  *(undefined8 *)&(this->OpenMapIndexFilterList).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OpenMapIndexFilterList).Delegate.field_0x10 = 0;
  this->IconID = 0;
  (this->MapIndexText).StringTableType = None;
  (this->MapIndexText).StringTableID = 0;
  (this->MapIndexText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MapIndexText).StringEnumTableNameID.Number = 0;
  (this->MapIndexText).DateTime.Ticks = 0;
  (this->MapIndexText).TimeSpan.Ticks = 0;
  (this->MapIndexText).TimeExpressionType = None;
  (this->MapIndexText).IsExpression = false;
  (this->MapIndexText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapIndexText).UniqueString.Data.ArrayNum = 0;
  (this->MapIndexText).UniqueString.Data.ArrayMax = 0;
  (this->MapIndexText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapIndexText).FormatArgs.ArrayNum = 0;
  (this->MapIndexText).FormatArgs.ArrayMax = 0;
  this->MapIndexGroupID = 0;
  this->ListViewIndex = 0;
  this->CurSeletedIndex = 0;
  this->IsGamePad = false;
  (this->OpenMapIndexFilterList)._padding_ = '\0';
  (this->OpenMapIndexFilterList).bIsCustomSelected = false;
  (this->OpenMapIndexFilterList).bIsLacked = false;
  (this->OpenMapIndexFilterList).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_WorldMap_MapIndexFilter_MapIndex @ 14b711fd0

UDS_VM_WorldMap_MapIndexFilter_MapIndex * __thiscall
UDS_VM_WorldMap_MapIndexFilter_MapIndex::UDS_VM_WorldMap_MapIndexFilter_MapIndex
          (UDS_VM_WorldMap_MapIndexFilter_MapIndex *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->HoverUIVisibility = Collapsed;
  this->IsChecked = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_MapIndexFilter_MapIndex__6B_;
  *(undefined8 *)&(this->OpenMapIndexFilterList).Delegate = 0;
  *(undefined8 *)&(this->OpenMapIndexFilterList).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OpenMapIndexFilterList).Delegate.field_0x10 = 0;
  this->IconID = 0;
  (this->MapIndexText).StringTableType = None;
  (this->MapIndexText).StringTableID = 0;
  (this->MapIndexText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MapIndexText).StringEnumTableNameID.Number = 0;
  (this->MapIndexText).DateTime.Ticks = 0;
  (this->MapIndexText).TimeSpan.Ticks = 0;
  (this->MapIndexText).TimeExpressionType = None;
  (this->MapIndexText).IsExpression = false;
  (this->MapIndexText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapIndexText).UniqueString.Data.ArrayNum = 0;
  (this->MapIndexText).UniqueString.Data.ArrayMax = 0;
  (this->MapIndexText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapIndexText).FormatArgs.ArrayNum = 0;
  (this->MapIndexText).FormatArgs.ArrayMax = 0;
  this->MapIndexGroupID = 0;
  this->ListViewIndex = 0;
  this->CurSeletedIndex = 0;
  this->IsGamePad = false;
  (this->OpenMapIndexFilterList)._padding_ = '\0';
  (this->OpenMapIndexFilterList).bIsCustomSelected = false;
  (this->OpenMapIndexFilterList).bIsLacked = false;
  (this->OpenMapIndexFilterList).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_WorldMap_MapIndexFilter_MapIndex @ 14b713840

void __thiscall
UDS_VM_WorldMap_MapIndexFilter_MapIndex::~UDS_VM_WorldMap_MapIndexFilter_MapIndex
          (UDS_VM_WorldMap_MapIndexFilter_MapIndex *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_MapIndexFilter_MapIndex__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MapIndexText).FormatArgs.AllocatorInstance.Data,
             (this->MapIndexText).FormatArgs.ArrayNum);
  pFVar1 = (this->MapIndexText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MapIndexText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OpenMapIndexFilterList).Delegate);
  pvVar2 = *(void **)&(this->OpenMapIndexFilterList).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OpenMapIndexFilterList).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716de0

IClassDescriptor * __thiscall
UDS_VM_WorldMap_MapIndexFilter_MapIndex::GetFieldNotificationDescriptor
          (UDS_VM_WorldMap_MapIndexFilter_MapIndex *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_MapIndexFilter_MapIndex::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7180d0

UClass * __cdecl UDS_VM_WorldMap_MapIndexFilter_MapIndex::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_MapIndexFilter_MapIndex.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_MapIndexFilter_MapIndex",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_MapIndexFilter_MapIndex.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_MapIndexFilter_MapIndex,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_MapIndexFilter_MapIndex>
               ,InternalVTableHelperCtorCaller<UDS_VM_WorldMap_MapIndexFilter_MapIndex>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_MapIndexFilter_MapIndex.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldMap_MapIndexFilter_MapIndex @ 14b718ad0

void __cdecl
UDS_VM_WorldMap_MapIndexFilter_MapIndex::
StaticRegisterNativesUDS_VM_WorldMap_MapIndexFilter_MapIndex(void)

{
  return;
}

// BindModel @ 14c06c760

void __thiscall
UDS_VM_WorldMap_MapIndexFilter_MapIndex::BindModel(UDS_VM_WorldMap_MapIndexFilter_MapIndex *this)

{
  UDS_InputEvent *pUVar1;
  UDS_WorldMapEvent *pUVar2;
  
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeInputDeviceType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputDeviceType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_MapIndexFilter_MapIndex>
              (&pUVar1->OnChangeInputDeviceType,
               (UDS_VM_WorldMap_MapIndexFilter_MapIndex *)&stack0x00000010,(pmf_42d06e0f *)this);
  }
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->MapIndexFilterSoltSelectedIndxDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_MapIndexFilter_MapIndex>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->MapIndexFilterSoltSelectedIndxDelegate,
               (UDS_VM_WorldMap_MapIndexFilter_MapIndex *)&stack0x00000010,(pmf_743b5afb *)this);
  }
  return;
}

// InitViewModel @ 14c08c940

void __thiscall
UDS_VM_WorldMap_MapIndexFilter_MapIndex::InitViewModel
          (UDS_VM_WorldMap_MapIndexFilter_MapIndex *this)

{
  return;
}

// OnChangeInputDevice @ 14c0920c0

void __thiscall
UDS_VM_WorldMap_MapIndexFilter_MapIndex::OnChangeInputDevice
          (UDS_VM_WorldMap_MapIndexFilter_MapIndex *this,EDS_InputDeviceType *param_1)

{
  FName local_18;
  int local_10;
  
  if (*param_1 == KeyboardMouse) {
    this->IsGamePad = false;
    this->HoverUIVisibility = Collapsed;
  }
  else {
    if (*param_1 != GamePad) {
      return;
    }
    this->IsGamePad = true;
    if (this->CurSeletedIndex == this->ListViewIndex) {
      this->HoverUIVisibility = SelfHitTestInvisible;
    }
  }
  local_10 = FFieldNotificationClassDescriptor::HoverUIVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HoverUIVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCheckStateChanged @ 14c092d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_MapIndexFilter_MapIndex::OnCheckStateChanged
          (UDS_VM_WorldMap_MapIndexFilter_MapIndex *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WorldMapLocalSave *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158 [2];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this->IsChecked = this->IsChecked == false;
  UDS_WorldMapLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_158);
  if (bVar1) {
    this_00 = (UDS_WorldMapLocalSave *)FWeakObjectPtr::Get(local_158);
    UDS_WorldMapLocalSave::ChangeMapIndexGroupChecked(this_00,this->MapIndexGroupID,this->IsChecked)
    ;
    local_140 = FFieldNotificationClassDescriptor::IsChecked.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::IsChecked.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap_MapIndexFilter_MapIndex::OnCheckStateChanged",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x81,L"localSave IsValid = false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnSeletedIndex @ 14c099410

void __thiscall
UDS_VM_WorldMap_MapIndexFilter_MapIndex::OnSeletedIndex
          (UDS_VM_WorldMap_MapIndexFilter_MapIndex *this,int param_1)

{
  ESlateVisibility EVar1;
  FName local_18;
  int local_10;
  
  this->CurSeletedIndex = param_1;
  if (this->IsGamePad == true) {
    EVar1 = Collapsed;
    if (param_1 == this->ListViewIndex) {
      EVar1 = SelfHitTestInvisible;
    }
    this->HoverUIVisibility = EVar1;
  }
  local_10 = FFieldNotificationClassDescriptor::HoverUIVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HoverUIVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14c09a010

void __thiscall
UDS_VM_WorldMap_MapIndexFilter_MapIndex::OnSetViewModel
          (UDS_VM_WorldMap_MapIndexFilter_MapIndex *this,TSharedPtr<FDS_ViewModelContext,1> *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UObject *pUVar4;
  longlong *plVar5;
  FWeakObjectPtr local_res10;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo *)0x0) {
    this->MapIndexGroupID = (local_28.Object)->MapIndexGroupID;
    this->IconID = (local_28.Object)->IconID;
    FDS_Text::operator=(&this->MapIndexText,&(local_28.Object)->MapIndexNameText);
    this->IsChecked = (local_28.Object)->IsChecked;
    this->ListViewIndex = (local_28.Object)->ListViewIndex;
    this->CurSeletedIndex = (local_28.Object)->SelectedIndex;
    ADS_PlayerController::GetPlayerController();
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_res10);
      if (pUVar4[0x36].field_0x8 == '\x01') {
        this->IsGamePad = false;
      }
      else if (pUVar4[0x36].field_0x8 == '\x02') {
        this->IsGamePad = true;
      }
      if (this->IsGamePad == true) {
        EVar3 = Collapsed;
        if (this->CurSeletedIndex == this->ListViewIndex) {
          EVar3 = SelfHitTestInvisible;
        }
        this->HoverUIVisibility = EVar3;
      }
      plVar5 = &this->_padding_;
      local_60 = FFieldNotificationClassDescriptor::HoverUIVisibility.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::HoverUIVisibility.FieldName;
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_68);
      local_50 = FFieldNotificationClassDescriptor::IconID.BitNumber;
      local_58 = FFieldNotificationClassDescriptor::IconID.FieldName;
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_58);
      local_40 = FFieldNotificationClassDescriptor::MapIndexText.BitNumber;
      local_48 = FFieldNotificationClassDescriptor::MapIndexText.FieldName;
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_48);
      local_30 = FFieldNotificationClassDescriptor::IsChecked.BitNumber;
      local_38 = FFieldNotificationClassDescriptor::IsChecked.FieldName;
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_38);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14c0adcf0

void __thiscall
UDS_VM_WorldMap_MapIndexFilter_MapIndex::UnbindModel(UDS_VM_WorldMap_MapIndexFilter_MapIndex *this)

{
  UDS_InputEvent *pUVar1;
  UDS_WorldMapEvent *pUVar2;
  
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeInputDeviceType,this);
  }
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->MapIndexFilterSoltSelectedIndxDelegate,this);
    return;
  }
  return;
}

