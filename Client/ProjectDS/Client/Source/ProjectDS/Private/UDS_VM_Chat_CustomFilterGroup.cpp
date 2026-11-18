// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetChattingTypeGroupName_WrapperImpl @ 14b606a00

void __cdecl
UDS_VM_Chat_CustomFilterGroup::SetChattingTypeGroupName_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ChattingTypeGroupName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ChattingTypeGroupName.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetChattingTypeIconID_WrapperImpl @ 14b606a10

void __cdecl
UDS_VM_Chat_CustomFilterGroup::SetChattingTypeIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetChattingTypeIconID(param_1,*(int *)param_2);
  return;
}

// SetCheckStateChangeEventField_WrapperImpl @ 14b606a20

void __cdecl
UDS_VM_Chat_CustomFilterGroup::SetCheckStateChangeEventField_WrapperImpl
          (void *param_1,void *param_2)

{
  FDS_ChatCustomFilter *this;
  FName FVar1;
  FName FStack_18;
  int iStack_10;
  
  FVar1 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (*(char *)((longlong)param_1 + 0x109) != *(char *)param_2) {
    iStack_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    *(char *)((longlong)param_1 + 0x109) = *(char *)param_2;
    FStack_18 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  this = *(FDS_ChatCustomFilter **)((longlong)param_1 + 0x110);
  if (this != (FDS_ChatCustomFilter *)0x0) {
    if (*(char *)((longlong)param_1 + 0x120) == '\x01') {
      FDS_ChatCustomFilter::SetAllNormalTypeChecked(this,*(bool *)((longlong)param_1 + 0x109));
      return;
    }
    if (*(char *)((longlong)param_1 + 0x121) == '\x01') {
      FDS_ChatCustomFilter::SetAllSystemTypeChecked(this,*(bool *)((longlong)param_1 + 0x109));
      return;
    }
  }
  return;
}

// SetbIsSelected_WrapperImpl @ 14b606a30

void __cdecl UDS_VM_Chat_CustomFilterGroup::SetbIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (*(char *)((longlong)param_1 + 0x109) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x109) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b606a40

UClass * __cdecl UDS_VM_Chat_CustomFilterGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_CustomFilterGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_CustomFilterGroup",
               &Z_Registration_Info_UClass_UDS_VM_Chat_CustomFilterGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_CustomFilterGroup,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Chat_CustomFilterGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_CustomFilterGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_CustomFilterGroup.InnerSingleton;
}

// UDS_VM_Chat_CustomFilterGroup @ 14b60b100

UDS_VM_Chat_CustomFilterGroup * __thiscall
UDS_VM_Chat_CustomFilterGroup::UDS_VM_Chat_CustomFilterGroup
          (UDS_VM_Chat_CustomFilterGroup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_CustomFilterGroup__6B_;
  (this->ChattingTypeGroupName).StringTableID = 0;
  (this->ChattingTypeGroupName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChattingTypeGroupName).StringEnumTableNameID.Number = 0;
  (this->ChattingTypeGroupName).DateTime.Ticks = 0;
  (this->ChattingTypeGroupName).TimeSpan.Ticks = 0;
  (this->ChattingTypeGroupName).TimeExpressionType = None;
  (this->ChattingTypeGroupName).IsExpression = false;
  (this->ChattingTypeGroupName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ChattingTypeGroupName).UniqueString.Data.ArrayNum = 0;
  (this->ChattingTypeGroupName).UniqueString.Data.ArrayMax = 0;
  (this->ChattingTypeGroupName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChattingTypeGroupName).FormatArgs.ArrayNum = 0;
  (this->ChattingTypeGroupName).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->CheckStateChangeEventField).bIsActivate = false;
  (this->ChatCustomFilter).Object = (FDS_ChatCustomFilter *)0x0;
  (this->ChatCustomFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsNormalTypeGroup = false;
  this->bIsSystemTypeGroup = false;
  (this->ChattingTypeGroupName).StringTableType = None;
  return this;
}

// UDS_VM_Chat_CustomFilterGroup @ 14b60b1c0

UDS_VM_Chat_CustomFilterGroup * __thiscall
UDS_VM_Chat_CustomFilterGroup::UDS_VM_Chat_CustomFilterGroup
          (UDS_VM_Chat_CustomFilterGroup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_CustomFilterGroup__6B_;
  (this->ChattingTypeGroupName).StringTableID = 0;
  (this->ChattingTypeGroupName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChattingTypeGroupName).StringEnumTableNameID.Number = 0;
  (this->ChattingTypeGroupName).DateTime.Ticks = 0;
  (this->ChattingTypeGroupName).TimeSpan.Ticks = 0;
  (this->ChattingTypeGroupName).TimeExpressionType = None;
  (this->ChattingTypeGroupName).IsExpression = false;
  (this->ChattingTypeGroupName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ChattingTypeGroupName).UniqueString.Data.ArrayNum = 0;
  (this->ChattingTypeGroupName).UniqueString.Data.ArrayMax = 0;
  (this->ChattingTypeGroupName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChattingTypeGroupName).FormatArgs.ArrayNum = 0;
  (this->ChattingTypeGroupName).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->CheckStateChangeEventField).bIsActivate = false;
  (this->ChatCustomFilter).Object = (FDS_ChatCustomFilter *)0x0;
  (this->ChatCustomFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsNormalTypeGroup = false;
  this->bIsSystemTypeGroup = false;
  (this->ChattingTypeGroupName).StringTableType = None;
  return this;
}

// ~UDS_VM_Chat_CustomFilterGroup @ 14b60c350

void __thiscall
UDS_VM_Chat_CustomFilterGroup::~UDS_VM_Chat_CustomFilterGroup(UDS_VM_Chat_CustomFilterGroup *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_CustomFilterGroup__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChatCustomFilter).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChattingTypeGroupName).FormatArgs.AllocatorInstance.Data,
             (this->ChattingTypeGroupName).FormatArgs.ArrayNum);
  pFVar1 = (this->ChattingTypeGroupName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChattingTypeGroupName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b60dc80

IClassDescriptor * __thiscall
UDS_VM_Chat_CustomFilterGroup::GetFieldNotificationDescriptor(UDS_VM_Chat_CustomFilterGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_CustomFilterGroup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b60e500

UClass * __cdecl UDS_VM_Chat_CustomFilterGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_CustomFilterGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_CustomFilterGroup",
               &Z_Registration_Info_UClass_UDS_VM_Chat_CustomFilterGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_CustomFilterGroup,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Chat_CustomFilterGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_CustomFilterGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_CustomFilterGroup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_CustomFilterGroup @ 14b60e920

void __cdecl UDS_VM_Chat_CustomFilterGroup::StaticRegisterNativesUDS_VM_Chat_CustomFilterGroup(void)

{
  return;
}

// BindModel @ 14bd47620

void __thiscall UDS_VM_Chat_CustomFilterGroup::BindModel(UDS_VM_Chat_CustomFilterGroup *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedCustomFilter,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_CustomFilterGroup>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedCustomFilter,(UDS_VM_Chat_CustomFilterGroup *)&stack0x00000010,
               (pmf_15860948 *)this);
  }
  return;
}

// OnChangedCustomFilter @ 14bd6ff70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_CustomFilterGroup::OnChangedCustomFilter(UDS_VM_Chat_CustomFilterGroup *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_ChatCustomFilter *pFVar3;
  undefined1 auStackY_178 [32];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar3 = (this->ChatCustomFilter).Object;
  if (pFVar3 == (FDS_ChatCustomFilter *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_CustomFilterGroup::OnChangedCustomFilter",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xb3,L"ChatCustomFilter.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (this->bIsNormalTypeGroup == true) {
      bVar1 = FDS_ChatCustomFilter::IsAllNormalTypeChecked(pFVar3);
    }
    else {
      if (this->bIsSystemTypeGroup != true) {
        return;
      }
      pFVar3 = TSharedPtr<FDS_ChatCustomFilter,1>::operator->(&this->ChatCustomFilter);
      bVar1 = FDS_ChatCustomFilter::IsAllSystemTypeChecked(pFVar3);
    }
    local_148 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    if (this->bIsSelected != bVar1) {
      local_140 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
      this->bIsSelected = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    }
  }
  return;
}

// OnCheckStateChangeEventField @ 14bd70d40

void __thiscall
UDS_VM_Chat_CustomFilterGroup::OnCheckStateChangeEventField
          (UDS_VM_Chat_CustomFilterGroup *this,FDS_WidgetEventField *param_1)

{
  FDS_ChatCustomFilter *this_00;
  FName FVar1;
  FName local_18;
  int local_10;
  
  FVar1 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (this->bIsSelected != param_1->bIsActivate) {
    local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    this->bIsSelected = param_1->bIsActivate;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  this_00 = (this->ChatCustomFilter).Object;
  if (this_00 != (FDS_ChatCustomFilter *)0x0) {
    if (this->bIsNormalTypeGroup == true) {
      FDS_ChatCustomFilter::SetAllNormalTypeChecked(this_00,this->bIsSelected);
      return;
    }
    if (this->bIsSystemTypeGroup == true) {
      FDS_ChatCustomFilter::SetAllSystemTypeChecked(this_00,this->bIsSelected);
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bd7fb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_CustomFilterGroup::OnSetViewModel
          (UDS_VM_Chat_CustomFilterGroup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  bool bVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ChatCustomFilter *pFVar3;
  code *pcVar4;
  FDS_ViewModelContext_ChatCustomFilterGroup *pFVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext_ChatCustomFilterGroup,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  FDS_ChatCustomFilter *local_148;
  TReferenceControllerBase<1> *pTStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  SafeCast<FDS_ViewModelContext_ChatCustomFilterGroup>(&local_168,&local_158);
  pFVar5 = local_168.Object;
  if (local_168.Object == (FDS_ViewModelContext_ChatCustomFilterGroup *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)local_168.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_CustomFilterGroup::OnSetViewModel",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x16,
                 L"chatCustomFilterGroupContext.IsValid() == false");
      if ((FDS_ViewModelContext_ChatCustomFilterGroup *)local_138._padding_ !=
          (FDS_ViewModelContext_ChatCustomFilterGroup *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_168.Object == (FDS_ViewModelContext_ChatCustomFilterGroup *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar2 = (pFVar5->ChatCustomFilter).SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar5->ChatCustomFilter).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148 = (this->ChatCustomFilter).Object;
    pTStack_140 = (this->ChatCustomFilter).SharedReferenceCount.ReferenceController;
    (this->ChatCustomFilter).Object = pFVar3;
    (this->ChatCustomFilter).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_140)
    ;
    if (local_168.Object == (FDS_ViewModelContext_ChatCustomFilterGroup *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar6 = (local_168.Object)->bIsNormalTypeGroup;
    this->bIsNormalTypeGroup = bVar6;
    bVar1 = (local_168.Object)->bIsSystemTypeGroup;
    this->bIsSystemTypeGroup = bVar1;
    if (bVar6 == true) {
      UpdateNormalTypeCheck(this);
    }
    else if (bVar1 == true) {
      UpdateSystemTypeCheck(this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetChattingTypeGroupName @ 14bd87b90

void __thiscall
UDS_VM_Chat_CustomFilterGroup::SetChattingTypeGroupName
          (UDS_VM_Chat_CustomFilterGroup *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ChattingTypeGroupName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ChattingTypeGroupName.FieldName;
  FDS_Text::operator=(&this->ChattingTypeGroupName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetChattingTypeIconID @ 14bd87bf0

void __thiscall
UDS_VM_Chat_CustomFilterGroup::SetChattingTypeIconID
          (UDS_VM_Chat_CustomFilterGroup *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChattingTypeIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChattingTypeIconID.FieldName;
  if (this->ChattingTypeIconID != param_1) {
    this->ChattingTypeIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsSelected @ 14bd89c20

void __thiscall
UDS_VM_Chat_CustomFilterGroup::SetIsSelected(UDS_VM_Chat_CustomFilterGroup *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (this->bIsSelected != *param_1) {
    this->bIsSelected = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bd8bdb0

void __thiscall UDS_VM_Chat_CustomFilterGroup::UnbindModel(UDS_VM_Chat_CustomFilterGroup *this)

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

// UpdateNormalTypeCheck @ 14bd92750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_CustomFilterGroup::UpdateNormalTypeCheck(UDS_VM_Chat_CustomFilterGroup *this)

{
  longlong *plVar1;
  FScriptContainerElement FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDS_ChatCustomFilter *pFVar4;
  code *pcVar5;
  FName FVar6;
  int iVar7;
  FDS_ViewModelContext_ChatCustomFilter *pFVar8;
  FSharedReferencer<1> FVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar12;
  FDS_ChatCustomFilter *pFVar13;
  ulonglong uVar14;
  UDS_UserObjectListItem *this_01;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_4d8 [32];
  undefined1 local_4a8 [4];
  uint local_4a4;
  TSharedPtr<FDS_ViewModelContext_ChatCustomFilter,1> local_498;
  TSharedPtr<FDS_ChattingTabData,1> local_488;
  UDS_UserObjectListItem *local_478;
  FScriptContainerElement *local_470;
  longlong *local_468;
  FName local_458;
  int local_450;
  FName local_448;
  int local_440;
  FName local_438;
  int local_430;
  FName local_428;
  int local_420;
  FDS_Text local_418;
  FDS_ChatCustomFilter *local_3c8;
  TReferenceControllerBase<1> *pTStack_3c0;
  TSharedPtr<FDS_ViewModelContext,1> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 != (UDS_LogManager *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_VM_Chat_CustomFilterGroup::UpdateNormalTypeCheck",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar12,1,Warning,local_3a8.Ptr,0x61,L"chattingManager == nullptr");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
  }
  else if ((this->ChatCustomFilter).Object == (FDS_ChatCustomFilter *)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 != (UDS_LogManager *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_Chat_CustomFilterGroup::UpdateNormalTypeCheck",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar12,1,Warning,local_288.Ptr,0x67,L"ChatCustomFilter.IsValid() == false");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetChattingTabData(this_00,&local_488,Total);
    if (local_488.Object == (FDS_ChattingTabData *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      if (pUVar12 != (UDS_LogManager *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_Chat_CustomFilterGroup::UpdateNormalTypeCheck",0x34,Yes);
        UDS_LogManager::PrintLog
                  (pUVar12,1,Warning,local_168.Ptr,0x6e,L"chattingTabData.IsValid() == false");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      TSharedPtr<FDS_ChatCustomFilter,1>::operator->(&this->ChatCustomFilter);
      local_418.StringTableType = None;
      local_418.StringTableID = 0;
      local_418.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_418.StringEnumTableNameID.Number = 0;
      local_418.TimeExpressionType = None;
      local_418.IsExpression = false;
      local_418.DateTime.Ticks = 0;
      local_418.TimeSpan.Ticks = 0;
      local_418.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_418.UniqueString.Data.ArrayNum = 0;
      local_418.UniqueString.Data.ArrayMax = 0;
      local_418.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_418.FormatArgs.ArrayNum = 0;
      local_418.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_418,StringUi,0xc5ce);
      iVar7 = FFieldNotificationClassDescriptor::ChattingTypeGroupName.BitNumber;
      FVar6 = FFieldNotificationClassDescriptor::ChattingTypeGroupName.FieldName;
      FDS_Text::operator=(&this->ChattingTypeGroupName,&local_418);
      plVar1 = &this->_padding_;
      local_458 = FVar6;
      local_450 = iVar7;
      local_468 = plVar1;
      (**(code **)(this->_padding_ + 0x38))(plVar1,&local_458);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_418.FormatArgs.AllocatorInstance.Data,
                 local_418.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_418.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_418.FormatArgs.AllocatorInstance.Data);
      }
      if (local_418.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.UniqueString.Data.AllocatorInstance.Data);
      }
      if ((local_488.Object == (FDS_ChattingTabData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = FFieldNotificationClassDescriptor::ChattingTypeIconID.BitNumber;
      FVar6 = FFieldNotificationClassDescriptor::ChattingTypeIconID.FieldName;
      if (this->ChattingTypeIconID != (local_488.Object)->TabIconID) {
        this->ChattingTypeIconID = (local_488.Object)->TabIconID;
        local_440 = iVar7;
        local_448 = FVar6;
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_448);
      }
      pFVar13 = TSharedPtr<FDS_ChatCustomFilter,1>::operator->(&this->ChatCustomFilter);
      bVar11 = FDS_ChatCustomFilter::IsAllNormalTypeChecked(pFVar13);
      iVar7 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
      FVar6 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
      if (this->bIsSelected != bVar11) {
        this->bIsSelected = bVar11;
        local_430 = iVar7;
        local_438 = FVar6;
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_438);
      }
      FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
      pFVar13 = TSharedPtr<FDS_ChatCustomFilter,1>::operator->(&this->ChatCustomFilter);
      pFVar15 = (pFVar13->NormalTypes).AllocatorInstance.Data;
      local_4a4 = (pFVar13->NormalTypes).ArrayNum;
      uVar14 = (ulonglong)(int)local_4a4;
      local_470 = pFVar15 + uVar14;
      while( true ) {
        pFVar10 = local_470;
        if ((pFVar13->NormalTypes).ArrayNum != (int)uVar14) {
          local_4a8[0] = 0;
          `TCheckedPointerIterator<enum_EDS_ChattingType_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_4a8);
        }
        if (pFVar15 == pFVar10) break;
        this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        MakeContext<FDS_ViewModelContext_ChatCustomFilter>(&local_498);
        pFVar8 = local_498.Object;
        if ((local_498.Object == (FDS_ViewModelContext_ChatCustomFilter *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)&pFVar8->_padding_ = 0x130;
        pTVar3 = (this->ChatCustomFilter).SharedReferenceCount.ReferenceController;
        pFVar4 = (this->ChatCustomFilter).Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_3c8 = (pFVar8->ChatCustomFilter).Object;
        pTStack_3c0 = (pFVar8->ChatCustomFilter).SharedReferenceCount.ReferenceController;
        (pFVar8->ChatCustomFilter).Object = pFVar4;
        (pFVar8->ChatCustomFilter).SharedReferenceCount.ReferenceController = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_3c0);
        pFVar8 = local_498.Object;
        FVar2 = *pFVar15;
        if ((local_498.Object == (FDS_ViewModelContext_ChatCustomFilter *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar9.ReferenceController = local_498.SharedReferenceCount.ReferenceController;
        local_3b8.Object = (FDS_ViewModelContext *)local_498.Object;
        local_3b8.SharedReferenceCount.ReferenceController =
             local_498.SharedReferenceCount.ReferenceController;
        pFVar8->ChattingType = (EDS_ChattingType)FVar2;
        if (local_498.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_498.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_498.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(this_01,&local_3b8);
        local_478 = this_01;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_478);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar9.ReferenceController);
        uVar14 = (ulonglong)local_4a4;
        pFVar15 = pFVar15 + 1;
      }
      local_420 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
      local_428 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
      (**(code **)(*local_468 + 0x38))(local_468,&local_428);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_488.SharedReferenceCount.ReferenceController);
  }
  return;
}

// UpdateSystemTypeCheck @ 14bd936f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_CustomFilterGroup::UpdateSystemTypeCheck(UDS_VM_Chat_CustomFilterGroup *this)

{
  FDS_ChatCustomFilter *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ChatCustomFilter *pFVar3;
  code *pcVar4;
  FName FVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar10;
  ulonglong uVar11;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar12;
  FDS_ViewModelContext *pFVar13;
  UScriptStruct *pUVar14;
  UDS_ViewModelContextManager *this_02;
  FDS_ViewModelContext *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_398 [32];
  undefined1 local_368 [4];
  uint local_364;
  UDS_UserObjectListItem *local_360;
  FScriptContainerElement *local_358;
  FName local_348;
  int local_340;
  FName local_338;
  int local_330;
  FName local_328;
  int local_320;
  FName local_318;
  int local_310;
  TSharedPtr<FDS_ViewModelContext,1> local_308;
  FDS_Text local_2f8;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  longlong local_298;
  TReferenceControllerBase<1> *pTStack_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_398;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_Chat_CustomFilterGroup::UpdateSystemTypeCheck",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar10,1,Warning,local_288.Ptr,0x8e,L"chattingManager == nullptr");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  else if ((this->ChatCustomFilter).Object == (FDS_ChatCustomFilter *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_Chat_CustomFilterGroup::UpdateSystemTypeCheck",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_168.Ptr,0x94,L"ChatCustomFilter.IsValid() == false");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    local_2f8.StringTableID = 0;
    local_2f8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_2f8.StringEnumTableNameID.Number = 0;
    local_2f8.DateTime.Ticks = 0;
    local_2f8.TimeSpan.Ticks = 0;
    local_2f8.TimeExpressionType = None;
    local_2f8.IsExpression = false;
    local_2f8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.UniqueString.Data.ArrayNum = 0;
    local_2f8.UniqueString.Data.ArrayMax = 0;
    local_2f8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.FormatArgs.ArrayNum = 0;
    local_2f8.FormatArgs.ArrayMax = 0;
    local_2f8.StringTableType = None;
    FDS_Text::SetTextFromStringTable(&local_2f8,StringUi,0xc5cf);
    iVar6 = FFieldNotificationClassDescriptor::ChattingTypeGroupName.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::ChattingTypeGroupName.FieldName;
    FDS_Text::operator=(&this->ChattingTypeGroupName,&local_2f8);
    local_348 = FVar5;
    local_340 = iVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_348);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_2f8.FormatArgs.AllocatorInstance.Data,
               local_2f8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_2f8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_2f8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_2f8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar9 = UDS_ChattingManager::GetChatIconID(this_00,System);
    iVar6 = FFieldNotificationClassDescriptor::ChattingTypeIconID.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::ChattingTypeIconID.FieldName;
    if (this->ChattingTypeIconID != iVar9) {
      this->ChattingTypeIconID = iVar9;
      local_330 = iVar6;
      local_338 = FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_338);
    }
    if (((this->ChatCustomFilter).Object == (FDS_ChatCustomFilter *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar8 = FDS_ChatCustomFilter::IsAllSystemTypeChecked((this->ChatCustomFilter).Object);
    iVar6 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    if (this->bIsSelected != bVar8) {
      this->bIsSelected = bVar8;
      local_320 = iVar6;
      local_328 = FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_328);
    }
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
    if (((this->ChatCustomFilter).Object == (FDS_ChatCustomFilter *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (this->ChatCustomFilter).Object;
    local_364 = (pFVar1->SystemTypes).ArrayNum;
    uVar11 = (ulonglong)(int)local_364;
    pFVar16 = (pFVar1->SystemTypes).AllocatorInstance.Data;
    local_358 = pFVar16 + uVar11;
    while( true ) {
      pFVar7 = local_358;
      if ((pFVar1->SystemTypes).ArrayNum != (int)uVar11) {
        local_368[0] = 0;
        `TCheckedPointerIterator<enum_EDS_ChattingType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_368);
      }
      if (pFVar16 == pFVar7) break;
      this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pFVar12 = ::operator_new(0x38);
      pFVar15 = (FDS_ViewModelContext *)0x0;
      if (pFVar12 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar12->ViewModelTemplateKey = 0;
        *(undefined4 *)((longlong)&pFVar12[1].ViewModelName.ComparisonIndex.Value + 1) = 0;
        *(undefined2 *)((longlong)&pFVar12[1].ViewModelName.Number + 1) = 0;
        *(undefined1 *)((longlong)&pFVar12[1].ViewModelName.Number + 3) = 0;
        *(undefined8 *)&pFVar12->DerivedStaticStruct = 0;
        (pFVar12->ViewModelName).ComparisonIndex = 0;
        (pFVar12->ViewModelName).Number = 0;
        pFVar12->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatCustomFilter__6B_;
        pFVar12[1]._padding_ = 0;
        *(undefined8 *)&pFVar12[1].DerivedStaticStruct = 0;
        *(undefined1 *)&pFVar12[1].ViewModelName.ComparisonIndex.Value = 0;
        pFVar15 = pFVar12;
      }
      pFVar13 = ::operator_new(0x20);
      pFVar12 = (FDS_ViewModelContext *)0x0;
      if (pFVar13 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar13->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar13->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar13->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatCustomFilter__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar13->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar13->ViewModelTemplateKey = pFVar15;
        pFVar12 = pFVar13;
      }
      if ((pFVar15 == (FDS_ViewModelContext *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar14 = FDS_ViewModelContext_ChatCustomFilter::StaticStruct();
      *(UScriptStruct **)&pFVar15->DerivedStaticStruct = pUVar14;
      this_02 = UDS_ViewModelContextManager::GetInst();
      if (this_02 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar12 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar12->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_308.Object = pFVar15;
        local_308.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
        UDS_ViewModelContextManager::RegisterContext(this_02,&local_308);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_308.SharedReferenceCount.ReferenceController);
      }
      pFVar15->ViewModelTemplateKey = Chat_CustomFilterSlot;
      pTVar2 = (this->ChatCustomFilter).SharedReferenceCount.ReferenceController;
      pFVar3 = (this->ChatCustomFilter).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_298 = pFVar15[1]._padding_;
      pTStack_290 = *(TReferenceControllerBase<1> **)&pFVar15[1].DerivedStaticStruct;
      pFVar15[1]._padding_ = (longlong)pFVar3;
      *(TReferenceControllerBase<1> **)&pFVar15[1].DerivedStaticStruct = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_290);
      *(FScriptContainerElement *)&pFVar15[1].ViewModelName.ComparisonIndex.Value = *pFVar16;
      if (pFVar12 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar12->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_2a8.Object = pFVar15;
      local_2a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
      UDS_UserObjectListItem::AddContext(this_01,&local_2a8);
      local_360 = this_01;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_360);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar12);
      uVar11 = (ulonglong)local_364;
      pFVar16 = pFVar16 + 1;
    }
    local_310 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
    local_318 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_318);
  }
  return;
}

