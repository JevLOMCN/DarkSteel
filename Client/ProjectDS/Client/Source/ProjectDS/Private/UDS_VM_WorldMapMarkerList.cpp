// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// SetListButtonClickEvent_WrapperImpl @ 14b6fc130

void __cdecl
UDS_VM_WorldMapMarkerList::SetListButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WorldMapEvent *pUVar1;
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)((longlong)param_1 + 0xf0) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  }
  else {
    UpdateUISwitcherIndex(param_1);
    UpdateMarkerList(param_1);
    OnUpdateMarkerCountText(param_1);
    *(undefined1 *)((longlong)param_1 + 0xf0) = 0;
    pUVar1 = UDS_WorldMapEvent::GetEvent();
    if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_LeftMenuType_const_>::Broadcast
                (&pUVar1->WorldMapLeftUITypeDelegate,MARKER);
    }
  }
  iStack_10 = FFieldNotificationClassDescriptor::ListUIVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ListUIVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetMarkerAllDeleteButtonClickEvent_WrapperImpl @ 14b6fc140

void __cdecl
UDS_VM_WorldMapMarkerList::SetMarkerAllDeleteButtonClickEvent_WrapperImpl
          (void *param_1,void *param_2)

{
  bool bVar1;
  UDS_WorldMapEvent *pUVar2;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->RequestAllMarkerDeleteDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->RequestAllMarkerDeleteDelegate).Delegate);
    }
  }
  TStack_28._0_8_ = 0;
  TStack_28._8_8_ = 0;
  TStack_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x447b6,Complete_None_01,&TStack_28);
  UpdateUISwitcherIndex(param_1);
  UpdateMarkerList(param_1);
  return;
}

// StaticClass @ 14b6fc150

UClass * __cdecl UDS_VM_WorldMapMarkerList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMapMarkerList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMapMarkerList",
               &Z_Registration_Info_UClass_UDS_VM_WorldMapMarkerList.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMapMarkerList,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_WorldMapMarkerList>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMapMarkerList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMapMarkerList.InnerSingleton;
}

// UDS_VM_WorldMapMarkerList @ 14b701e00

UDS_VM_WorldMapMarkerList * __thiscall
UDS_VM_WorldMapMarkerList::UDS_VM_WorldMapMarkerList
          (UDS_VM_WorldMapMarkerList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapMarkerList__6B_;
  *(undefined8 *)&(this->ListButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ListButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ListButtonClickEvent).Delegate.field_0x10 = 0;
  (this->MarkerAllDeleteButtonClickEvent)._padding_ = '\0';
  (this->MarkerAllDeleteButtonClickEvent).bIsCustomSelected = false;
  (this->MarkerAllDeleteButtonClickEvent).bIsLacked = false;
  (this->MarkerAllDeleteButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->MarkerAllDeleteButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->MarkerAllDeleteButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MarkerAllDeleteButtonClickEvent).Delegate.field_0x10 = 0;
  (this->ListButtonClickEvent)._padding_ = '\0';
  (this->ListButtonClickEvent).bIsCustomSelected = false;
  (this->ListButtonClickEvent).bIsLacked = false;
  (this->ListButtonClickEvent).bIsCustomDisabled = false;
  (this->EntryBindingEventFieldMarkerList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventFieldMarkerList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventFieldMarkerList).UserObjectList.ArrayMax = 0;
  (this->TextMyMarkerCount).StringTableType = None;
  (this->TextMyMarkerCount).StringTableID = 0;
  (this->TextMyMarkerCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextMyMarkerCount).StringEnumTableNameID.Number = 0;
  (this->TextMyMarkerCount).DateTime.Ticks = 0;
  (this->TextMyMarkerCount).TimeSpan.Ticks = 0;
  (this->TextMyMarkerCount).TimeExpressionType = None;
  (this->TextMyMarkerCount).IsExpression = false;
  (this->TextMyMarkerCount).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TextMyMarkerCount).UniqueString.Data.ArrayNum = 0;
  (this->TextMyMarkerCount).UniqueString.Data.ArrayMax = 0;
  (this->TextMyMarkerCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextMyMarkerCount).FormatArgs.ArrayNum = 0;
  (this->TextMyMarkerCount).FormatArgs.ArrayMax = 0;
  (this->TextEmptyList).StringTableType = None;
  (this->TextEmptyList).StringTableID = 0;
  (this->TextEmptyList).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextEmptyList).StringEnumTableNameID.Number = 0;
  (this->TextEmptyList).DateTime.Ticks = 0;
  (this->TextEmptyList).TimeSpan.Ticks = 0;
  (this->TextEmptyList).TimeExpressionType = None;
  (this->TextEmptyList).IsExpression = false;
  (this->TextEmptyList).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextEmptyList).UniqueString.Data.ArrayNum = 0;
  (this->TextEmptyList).UniqueString.Data.ArrayMax = 0;
  (this->TextEmptyList).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextEmptyList).FormatArgs.ArrayNum = 0;
  (this->TextEmptyList).FormatArgs.ArrayMax = 0;
  this->UISwitcherIndex = 0;
  this->ListUIVisibility = Collapsed;
  return this;
}

// UDS_VM_WorldMapMarkerList @ 14b701f30

UDS_VM_WorldMapMarkerList * __thiscall
UDS_VM_WorldMapMarkerList::UDS_VM_WorldMapMarkerList
          (UDS_VM_WorldMapMarkerList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapMarkerList__6B_;
  *(undefined8 *)&(this->ListButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ListButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ListButtonClickEvent).Delegate.field_0x10 = 0;
  (this->MarkerAllDeleteButtonClickEvent)._padding_ = '\0';
  (this->MarkerAllDeleteButtonClickEvent).bIsCustomSelected = false;
  (this->MarkerAllDeleteButtonClickEvent).bIsLacked = false;
  (this->MarkerAllDeleteButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->MarkerAllDeleteButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->MarkerAllDeleteButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MarkerAllDeleteButtonClickEvent).Delegate.field_0x10 = 0;
  (this->ListButtonClickEvent)._padding_ = '\0';
  (this->ListButtonClickEvent).bIsCustomSelected = false;
  (this->ListButtonClickEvent).bIsLacked = false;
  (this->ListButtonClickEvent).bIsCustomDisabled = false;
  (this->EntryBindingEventFieldMarkerList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventFieldMarkerList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventFieldMarkerList).UserObjectList.ArrayMax = 0;
  (this->TextMyMarkerCount).StringTableType = None;
  (this->TextMyMarkerCount).StringTableID = 0;
  (this->TextMyMarkerCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextMyMarkerCount).StringEnumTableNameID.Number = 0;
  (this->TextMyMarkerCount).DateTime.Ticks = 0;
  (this->TextMyMarkerCount).TimeSpan.Ticks = 0;
  (this->TextMyMarkerCount).TimeExpressionType = None;
  (this->TextMyMarkerCount).IsExpression = false;
  (this->TextMyMarkerCount).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TextMyMarkerCount).UniqueString.Data.ArrayNum = 0;
  (this->TextMyMarkerCount).UniqueString.Data.ArrayMax = 0;
  (this->TextMyMarkerCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextMyMarkerCount).FormatArgs.ArrayNum = 0;
  (this->TextMyMarkerCount).FormatArgs.ArrayMax = 0;
  (this->TextEmptyList).StringTableType = None;
  (this->TextEmptyList).StringTableID = 0;
  (this->TextEmptyList).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TextEmptyList).StringEnumTableNameID.Number = 0;
  (this->TextEmptyList).DateTime.Ticks = 0;
  (this->TextEmptyList).TimeSpan.Ticks = 0;
  (this->TextEmptyList).TimeExpressionType = None;
  (this->TextEmptyList).IsExpression = false;
  (this->TextEmptyList).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextEmptyList).UniqueString.Data.ArrayNum = 0;
  (this->TextEmptyList).UniqueString.Data.ArrayMax = 0;
  (this->TextEmptyList).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextEmptyList).FormatArgs.ArrayNum = 0;
  (this->TextEmptyList).FormatArgs.ArrayMax = 0;
  this->UISwitcherIndex = 0;
  this->ListUIVisibility = Collapsed;
  return this;
}

// ~UDS_VM_WorldMapMarkerList @ 14b7035a0

void __thiscall
UDS_VM_WorldMapMarkerList::~UDS_VM_WorldMapMarkerList(UDS_VM_WorldMapMarkerList *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapMarkerList__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TextEmptyList).FormatArgs.AllocatorInstance.Data,
             (this->TextEmptyList).FormatArgs.ArrayNum);
  pFVar1 = (this->TextEmptyList).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextEmptyList).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TextMyMarkerCount).FormatArgs.AllocatorInstance.Data,
             (this->TextMyMarkerCount).FormatArgs.ArrayNum);
  pFVar1 = (this->TextMyMarkerCount).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextMyMarkerCount).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventFieldMarkerList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->MarkerAllDeleteButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->MarkerAllDeleteButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MarkerAllDeleteButtonClickEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ListButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->ListButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ListButtonClickEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b706230

IClassDescriptor * __thiscall
UDS_VM_WorldMapMarkerList::GetFieldNotificationDescriptor(UDS_VM_WorldMapMarkerList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMapMarkerList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7070d0

UClass * __cdecl UDS_VM_WorldMapMarkerList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMapMarkerList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMapMarkerList",
               &Z_Registration_Info_UClass_UDS_VM_WorldMapMarkerList.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMapMarkerList,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_WorldMapMarkerList>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMapMarkerList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMapMarkerList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldMapMarkerList @ 14b707750

void __cdecl UDS_VM_WorldMapMarkerList::StaticRegisterNativesUDS_VM_WorldMapMarkerList(void)

{
  return;
}

// BindModel @ 14c004710

void __thiscall UDS_VM_WorldMapMarkerList::BindModel(UDS_VM_WorldMapMarkerList *this)

{
  UDS_WorldMapEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->MarkerCountDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMapMarkerList>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->MarkerCountDelegate,(UDS_VM_WorldMapMarkerList *)&stack0x00000010,
               (pmf_37a5ed7b *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->RefrashMarkerListUIDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMapMarkerList>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->RefrashMarkerListUIDelegate,(UDS_VM_WorldMapMarkerList *)&stack0x00000010,
               (pmf_37a5ed7b *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->WorldMapLeftUITypeDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_LeftMenuType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMapMarkerList>
              (&pUVar1->WorldMapLeftUITypeDelegate,(UDS_VM_WorldMapMarkerList *)&stack0x00000010,
               (pmf_4fec31bd *)this);
  }
  return;
}

// InitViewModel @ 14c020440

void __thiscall UDS_VM_WorldMapMarkerList::InitViewModel(UDS_VM_WorldMapMarkerList *this)

{
  int *piVar1;
  FName local_18;
  int local_10;
  
  (this->TextEmptyList).StringTableType = StringUi;
  (this->TextEmptyList).StringTableID = 0x4462a;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TextEmptyList).FormatArgs.AllocatorInstance.Data,
             (this->TextEmptyList).FormatArgs.ArrayNum);
  piVar1 = &(this->TextEmptyList).FormatArgs.ArrayMax;
  (this->TextEmptyList).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->TextEmptyList).FormatArgs.AllocatorInstance,0,piVar1);
  }
  this->ListUIVisibility = Collapsed;
  local_10 = FFieldNotificationClassDescriptor::TextEmptyList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextEmptyList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  local_10 = FFieldNotificationClassDescriptor::ListUIVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ListUIVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCloseInit @ 14c028950

void __thiscall UDS_VM_WorldMapMarkerList::OnCloseInit(UDS_VM_WorldMapMarkerList *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnListButtonClickEvent @ 14c02c060

void __thiscall
UDS_VM_WorldMapMarkerList::OnListButtonClickEvent
          (UDS_VM_WorldMapMarkerList *this,FDS_ButtonEventField *param_1)

{
  UDS_WorldMapEvent *pUVar1;
  FName local_18;
  int local_10;
  
  if (this->ListUIVisibility == Visible) {
    this->ListUIVisibility = Collapsed;
  }
  else {
    UpdateUISwitcherIndex(this);
    UpdateMarkerList(this);
    OnUpdateMarkerCountText(this);
    this->ListUIVisibility = Visible;
    pUVar1 = UDS_WorldMapEvent::GetEvent();
    if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_LeftMenuType_const_>::Broadcast
                (&pUVar1->WorldMapLeftUITypeDelegate,MARKER);
    }
  }
  local_10 = FFieldNotificationClassDescriptor::ListUIVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ListUIVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnMarkerAllDeleteButtonClickEvent @ 14c02cd40

void __thiscall
UDS_VM_WorldMapMarkerList::OnMarkerAllDeleteButtonClickEvent
          (UDS_VM_WorldMapMarkerList *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_WorldMapEvent *pUVar2;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->RequestAllMarkerDeleteDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->RequestAllMarkerDeleteDelegate).Delegate);
    }
  }
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x447b6,Complete_None_01,&local_28);
  UpdateUISwitcherIndex(this);
  UpdateMarkerList(this);
  return;
}

// OnUpdateMarkerCountText @ 14c03b4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMapMarkerList::OnUpdateMarkerCountText(UDS_VM_WorldMapMarkerList *this)

{
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar1;
  FDS_CommonDataTableRow *pFVar2;
  undefined1 auStackY_188 [32];
  uint uVar3;
  wchar_t *pwVar4;
  int local_158;
  int local_154 [3];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = UDS_WorldMapMarkerManager::GetInst();
  if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldMapMarkerList::OnUpdateMarkerCountText",0x32,Yes);
    pwVar4 = L"worldMapMarkerMgr nullptr";
    uVar3 = 0x6b;
  }
  else {
    pFVar2 = FDS_CommonDataTableRow::Get(0x791e,true);
    if (pFVar2 != (FDS_CommonDataTableRow *)0x0) {
      if ((pFVar2->OptionValue).Data.ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data;
      }
      local_158 = _wtoi(pwVar4);
      local_154[0] = UDS_WorldMapMarkerManager::GetWorldMapMarkerInfoCount(this_00);
      FDS_Text::SetTextFormatFromStringTable<int,int>
                (&this->TextMyMarkerCount,StringUi,0x445d0,local_154,&local_158);
      local_140 = FFieldNotificationClassDescriptor::TextMyMarkerCount.BitNumber;
      local_148 = FFieldNotificationClassDescriptor::TextMyMarkerCount.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldMapMarkerList::OnUpdateMarkerCountText",0x32,Yes);
    pwVar4 = L"mapMarkerMaxCountCommonDataTableRow nullptr";
    uVar3 = 0x72;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnUpdateMarkerListUI @ 14c03b6a0

void __thiscall UDS_VM_WorldMapMarkerList::OnUpdateMarkerListUI(UDS_VM_WorldMapMarkerList *this)

{
  UpdateUISwitcherIndex(this);
  UpdateMarkerList(this);
  return;
}

// OnWorldMapLeftUITypeCallBack @ 14c03bb00

void __thiscall
UDS_VM_WorldMapMarkerList::OnWorldMapLeftUITypeCallBack
          (UDS_VM_WorldMapMarkerList *this,EDS_LeftMenuType param_1)

{
  FName local_18;
  int local_10;
  
  if ((param_1 & ~MAPINDEX) == REGION) {
    this->ListUIVisibility = Collapsed;
    local_10 = FFieldNotificationClassDescriptor::ListUIVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ListUIVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14c049370

void __thiscall UDS_VM_WorldMapMarkerList::UnbindModel(UDS_VM_WorldMapMarkerList *this)

{
  UDS_WorldMapEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->MarkerCountDelegate,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->RefrashMarkerListUIDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->WorldMapLeftUITypeDelegate,this);
  }
  return;
}

// UpdateMarkerList @ 14c04d430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMapMarkerList::UpdateMarkerList(UDS_VM_WorldMapMarkerList *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar3;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_02;
  ulonglong uVar7;
  FDS_ViewModelContext *pFVar8;
  FDS_WorldMapMarkerInfo *pFVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [4];
  uint local_1b4;
  TArray<FDS_WorldMapMarkerInfo,TSizedDefaultAllocator<32>_> local_1b0;
  undefined8 local_1a0;
  UDS_UserObjectListItem *local_198 [2];
  FName local_188;
  int local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventFieldMarkerList);
  this_00 = UDS_WorldMapMarkerManager::GetInst();
  if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_WorldMapMarkerList::UpdateMarkerList",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x38,L"worldMapMarkerManager nullptr");
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
  }
  else {
    UDS_WorldMapMarkerManager::GetWorldMapMarkerInfoArray(this_00,&local_1b0);
    uVar7 = (ulonglong)local_1b0.ArrayNum;
    local_1b4 = local_1b0.ArrayNum;
    pFVar9 = (FDS_WorldMapMarkerInfo *)(local_1b0.AllocatorInstance.Data + uVar7 * 0x60);
    FVar10.Data = local_1b0.AllocatorInstance.Data;
    while( true ) {
      if (local_1b0.ArrayNum != (uint)uVar7) {
        local_1b8[0] = 0;
        `TCheckedPointerIterator<FDS_WorldMapMarkerInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1b8);
      }
      if ((FDS_WorldMapMarkerInfo *)FVar10.Data == pFVar9) break;
      this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 != (UDS_UserObjectListItem *)0x0) goto LAB_14c04d58c;
      }
      else if (this_01 != (UDS_UserObjectListItem *)0x0) {
        UE::GC::MarkAsReachable((UObject *)this_01);
LAB_14c04d58c:
        pFVar4 = ::operator_new(0x88);
        pFVar8 = (FDS_ViewModelContext *)0x0;
        if (pFVar4 != (FDS_ViewModelContext *)0x0) {
          local_1a0 = 0;
          *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
          pFVar4[4]._padding_ = 0;
          *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
          (pFVar4->ViewModelName).ComparisonIndex = 0;
          (pFVar4->ViewModelName).Number = 0;
          pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapMarkerListItemInfo__6B_;
          pFVar4[1]._padding_ = 0;
          *(undefined8 *)&pFVar4[1].DerivedStaticStruct = 0;
          pFVar4[1].ViewModelName.ComparisonIndex = 0;
          pFVar4[1].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar4[1].ViewModelTemplateKey = 0;
          pFVar4[2]._padding_ = 0;
          *(TVector2<double>_u_0 *)&pFVar4[2].DerivedStaticStruct =
               (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
          *(TVector2<double>_u_0 *)&pFVar4[2].ViewModelTemplateKey =
               (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
          *(TVector2<double>_u_0 *)&pFVar4[3].DerivedStaticStruct =
               (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
          pFVar4[3].ViewModelTemplateKey = None;
          *(undefined4 *)&pFVar4[3].field_0x1c = 0;
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)&pFVar4[3].ViewModelTemplateKey,(FObjectPtr)&local_1a0);
          *(undefined4 *)&pFVar4[4]._padding_ = 0;
          pFVar8 = pFVar4;
        }
        pFVar5 = ::operator_new(0x20);
        pFVar4 = (FDS_ViewModelContext *)0x0;
        if (pFVar5 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar5->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_WorldMapMarkerListItemInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar8;
          pFVar4 = pFVar5;
        }
        if ((pFVar8 == (FDS_ViewModelContext *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar6 = FDS_ViewModelContext_WorldMapMarkerListItemInfo::StaticStruct();
        *(UScriptStruct **)&pFVar8->DerivedStaticStruct = pUVar6;
        this_02 = UDS_ViewModelContextManager::GetInst();
        if (this_02 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar4 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar4->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar4->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_178.Object = pFVar8;
          local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4
          ;
          UDS_ViewModelContextManager::RegisterContext(this_02,&local_178);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_178.SharedReferenceCount.ReferenceController);
        }
        pFVar8->ViewModelTemplateKey = W_WorldMapMarkerListSlot;
        FDS_WorldMapMarkerInfo::operator=
                  ((FDS_WorldMapMarkerInfo *)(pFVar8 + 1),(FDS_WorldMapMarkerInfo *)FVar10.Data);
        if (pFVar4 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar4->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar4->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_168.Object = pFVar8;
        local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
        UDS_UserObjectListItem::AddContext(this_01,&local_168);
        local_198[0] = this_01;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventFieldMarkerList,
                   (TObjectPtr<UDS_UserObjectListItem>)local_198);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar4);
      }
      FVar10.Data = FVar10.Data + 0x60;
      uVar7 = (ulonglong)local_1b4;
    }
    local_180 = FFieldNotificationClassDescriptor::EntryBindingEventFieldMarkerList.BitNumber;
    local_188 = FFieldNotificationClassDescriptor::EntryBindingEventFieldMarkerList.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    DestructItems<FDS_WorldMapMarkerInfo,int>
              ((FDS_WorldMapMarkerInfo *)local_1b0.AllocatorInstance.Data,local_1b0.ArrayNum);
  }
  if ((FDS_WorldMapMarkerInfo *)local_1b0.AllocatorInstance.Data != (FDS_WorldMapMarkerInfo *)0x0) {
    FMemory::Free(local_1b0.AllocatorInstance.Data);
  }
  return;
}

// UpdateUISwitcherIndex @ 14c04f180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMapMarkerList::UpdateUISwitcherIndex(UDS_VM_WorldMapMarkerList *this)

{
  int iVar1;
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar2;
  TArray<FDS_WorldMapMarkerInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 auStackY_178 [32];
  TArray<FDS_WorldMapMarkerInfo,TSizedDefaultAllocator<32>_> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WorldMapMarkerManager::GetInst();
  if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMapMarkerList::UpdateUISwitcherIndex",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x5b,L"worldMapMarkerManager nullptr")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pTVar3 = UDS_WorldMapMarkerManager::GetWorldMapMarkerInfoArray(this_00,&local_148);
    iVar1 = pTVar3->ArrayNum;
    DestructItems<FDS_WorldMapMarkerInfo,int>
              ((FDS_WorldMapMarkerInfo *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
    if ((FDS_WorldMapMarkerInfo *)local_148.AllocatorInstance.Data != (FDS_WorldMapMarkerInfo *)0x0)
    {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    this->UISwitcherIndex = (uint)(iVar1 < 1);
    local_148.ArrayNum = FFieldNotificationClassDescriptor::UISwitcherIndex.BitNumber;
    local_148.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::UISwitcherIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  }
  return;
}

