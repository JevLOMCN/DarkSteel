// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetChattingTypeIconID_WrapperImpl @ 14b606c70

void __cdecl
UDS_VM_Chat_CustomFilterSlot::SetChattingTypeIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetChattingTypeIconID(param_1,*(int *)param_2);
  return;
}

// SetChattingTypeColor_WrapperImpl @ 14b606c80

void __cdecl
UDS_VM_Chat_CustomFilterSlot::SetChattingTypeColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0xf4)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0xf8))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0xfc))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x100))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::ChattingTypeColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ChattingTypeColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0xf8) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x100) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetCheckStateChangeEventField_WrapperImpl @ 14b606c90

void __cdecl
UDS_VM_Chat_CustomFilterSlot::SetCheckStateChangeEventField_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  FName FStack_18;
  int iStack_10;
  
  FVar1 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (*(char *)((longlong)param_1 + 0x105) != *(char *)param_2) {
    iStack_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    *(char *)((longlong)param_1 + 0x105) = *(char *)param_2;
    FStack_18 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  if (*(FDS_ChatCustomFilter **)((longlong)param_1 + 0x108) != (FDS_ChatCustomFilter *)0x0) {
    FDS_ChatCustomFilter::SetChattingTypeChecked
              (*(FDS_ChatCustomFilter **)((longlong)param_1 + 0x108),
               *(EDS_ChattingType *)((longlong)param_1 + 0x118),*(bool *)((longlong)param_1 + 0x105)
              );
    return;
  }
  return;
}

// SetbIsSelected_WrapperImpl @ 14b606ca0

void __cdecl UDS_VM_Chat_CustomFilterSlot::SetbIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (*(char *)((longlong)param_1 + 0x105) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x105) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b606cb0

UClass * __cdecl UDS_VM_Chat_CustomFilterSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_CustomFilterSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_CustomFilterSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_CustomFilterSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_CustomFilterSlot,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Chat_CustomFilterSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_CustomFilterSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_CustomFilterSlot.InnerSingleton;
}

// UDS_VM_Chat_CustomFilterSlot @ 14b60b280

UDS_VM_Chat_CustomFilterSlot * __thiscall
UDS_VM_Chat_CustomFilterSlot::UDS_VM_Chat_CustomFilterSlot
          (UDS_VM_Chat_CustomFilterSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_CustomFilterSlot__6B_;
  (this->ChattingTypeName).StringTableID = 0;
  (this->ChattingTypeName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChattingTypeName).StringEnumTableNameID.Number = 0;
  (this->ChattingTypeName).DateTime.Ticks = 0;
  (this->ChattingTypeName).TimeSpan.Ticks = 0;
  (this->ChattingTypeName).TimeExpressionType = None;
  (this->ChattingTypeName).IsExpression = false;
  (this->ChattingTypeName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ChattingTypeName).UniqueString.Data.ArrayNum = 0;
  (this->ChattingTypeName).UniqueString.Data.ArrayMax = 0;
  (this->ChattingTypeName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChattingTypeName).FormatArgs.ArrayNum = 0;
  (this->ChattingTypeName).FormatArgs.ArrayMax = 0;
  (this->CheckStateChangeEventField).bIsActivate = false;
  (this->ChatCustomFilter).Object = (FDS_ChatCustomFilter *)0x0;
  (this->ChatCustomFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ChattingType = None;
  (this->ChattingTypeName).StringTableType = None;
  return this;
}

// UDS_VM_Chat_CustomFilterSlot @ 14b60b330

UDS_VM_Chat_CustomFilterSlot * __thiscall
UDS_VM_Chat_CustomFilterSlot::UDS_VM_Chat_CustomFilterSlot
          (UDS_VM_Chat_CustomFilterSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_CustomFilterSlot__6B_;
  (this->ChattingTypeName).StringTableID = 0;
  (this->ChattingTypeName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChattingTypeName).StringEnumTableNameID.Number = 0;
  (this->ChattingTypeName).DateTime.Ticks = 0;
  (this->ChattingTypeName).TimeSpan.Ticks = 0;
  (this->ChattingTypeName).TimeExpressionType = None;
  (this->ChattingTypeName).IsExpression = false;
  (this->ChattingTypeName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ChattingTypeName).UniqueString.Data.ArrayNum = 0;
  (this->ChattingTypeName).UniqueString.Data.ArrayMax = 0;
  (this->ChattingTypeName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChattingTypeName).FormatArgs.ArrayNum = 0;
  (this->ChattingTypeName).FormatArgs.ArrayMax = 0;
  (this->CheckStateChangeEventField).bIsActivate = false;
  (this->ChatCustomFilter).Object = (FDS_ChatCustomFilter *)0x0;
  (this->ChatCustomFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ChattingType = None;
  (this->ChattingTypeName).StringTableType = None;
  return this;
}

// ~UDS_VM_Chat_CustomFilterSlot @ 14b60c3e0

void __thiscall
UDS_VM_Chat_CustomFilterSlot::~UDS_VM_Chat_CustomFilterSlot(UDS_VM_Chat_CustomFilterSlot *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_CustomFilterSlot__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChatCustomFilter).SharedReferenceCount.ReferenceController);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChattingTypeName).FormatArgs.AllocatorInstance.Data,
             (this->ChattingTypeName).FormatArgs.ArrayNum);
  pFVar1 = (this->ChattingTypeName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChattingTypeName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b60dcf0

IClassDescriptor * __thiscall
UDS_VM_Chat_CustomFilterSlot::GetFieldNotificationDescriptor(UDS_VM_Chat_CustomFilterSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_CustomFilterSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b60e5c0

UClass * __cdecl UDS_VM_Chat_CustomFilterSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_CustomFilterSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_CustomFilterSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_CustomFilterSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_CustomFilterSlot,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Chat_CustomFilterSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_CustomFilterSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_CustomFilterSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_CustomFilterSlot @ 14b60e930

void __cdecl UDS_VM_Chat_CustomFilterSlot::StaticRegisterNativesUDS_VM_Chat_CustomFilterSlot(void)

{
  return;
}

// BindModel @ 14bd476a0

void __thiscall UDS_VM_Chat_CustomFilterSlot::BindModel(UDS_VM_Chat_CustomFilterSlot *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedCustomFilter,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_CustomFilterSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedCustomFilter,(UDS_VM_Chat_CustomFilterSlot *)&stack0x00000010,
               (pmf_432b347b *)this);
  }
  return;
}

// OnChangedCustomFilter @ 14bd700b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_CustomFilterSlot::OnChangedCustomFilter(UDS_VM_Chat_CustomFilterSlot *this)

{
  FDS_ChatCustomFilter *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = (this->ChatCustomFilter).Object;
  if (this_00 == (FDS_ChatCustomFilter *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_CustomFilterSlot::OnChangedCustomFilter",0x33,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x6e,L"ChatCustomFilter.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    bVar1 = FDS_ChatCustomFilter::IsChattingTypeChecked(this_00,this->ChattingType);
    local_148 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    if (this->bIsSelected != bVar1) {
      local_140 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
      this->bIsSelected = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    }
  }
  return;
}

// OnCheckStateChangeEventField @ 14bd70dd0

void __thiscall
UDS_VM_Chat_CustomFilterSlot::OnCheckStateChangeEventField
          (UDS_VM_Chat_CustomFilterSlot *this,FDS_WidgetEventField *param_1)

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
    FDS_ChatCustomFilter::SetChattingTypeChecked(this_00,this->ChattingType,this->bIsSelected);
    return;
  }
  return;
}

// OnSetViewModel @ 14bd7fd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_CustomFilterSlot::OnSetViewModel
          (UDS_VM_Chat_CustomFilterSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatCustomFilter *pFVar2;
  code *pcVar3;
  FDS_ViewModelContext_ChatCustomFilter *pFVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext_ChatCustomFilter,1> local_168;
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
  SafeCast<FDS_ViewModelContext_ChatCustomFilter>(&local_168,&local_158);
  pFVar4 = local_168.Object;
  if (local_168.Object == (FDS_ViewModelContext_ChatCustomFilter *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_CustomFilterSlot::OnSetViewModel",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_138.Ptr,0x15,L"chatCustomFilterContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_168.Object == (FDS_ViewModelContext_ChatCustomFilter *)0x0) {
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
    if (local_168.Object == (FDS_ViewModelContext_ChatCustomFilter *)0x0) {
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
    this->ChattingType = (local_168.Object)->ChattingType;
    UpdateCustomFilterSlot(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetChattingTypeColor @ 14bd87b10

void __thiscall
UDS_VM_Chat_CustomFilterSlot::SetChattingTypeColor
          (UDS_VM_Chat_CustomFilterSlot *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->ChattingTypeColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->ChattingTypeColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->ChattingTypeColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->ChattingTypeColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::ChattingTypeColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ChattingTypeColor.FieldName;
    (this->ChattingTypeColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->ChattingTypeColor).field0_0x0._s_0.G = fVar1;
    (this->ChattingTypeColor).field0_0x0._s_0.B = fVar2;
    (this->ChattingTypeColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChattingTypeIconID @ 14bd87c40

void __thiscall
UDS_VM_Chat_CustomFilterSlot::SetChattingTypeIconID(UDS_VM_Chat_CustomFilterSlot *this,int param_1)

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

// SetChattingTypeName @ 14bd87c90

void __thiscall
UDS_VM_Chat_CustomFilterSlot::SetChattingTypeName
          (UDS_VM_Chat_CustomFilterSlot *this,FDS_StringBaseID *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringID(&this->ChattingTypeName,param_1);
  local_10 = FFieldNotificationClassDescriptor::ChattingTypeName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChattingTypeName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsSelected @ 14bd89c70

void __thiscall
UDS_VM_Chat_CustomFilterSlot::SetIsSelected(UDS_VM_Chat_CustomFilterSlot *this,bool *param_1)

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

// UnbindModel @ 14bd8bdf0

void __thiscall UDS_VM_Chat_CustomFilterSlot::UnbindModel(UDS_VM_Chat_CustomFilterSlot *this)

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

// UpdateCustomFilterSlot @ 14bd8eee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_CustomFilterSlot::UpdateCustomFilterSlot(UDS_VM_Chat_CustomFilterSlot *this)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FName FVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar9;
  FLinearColor *pFVar10;
  undefined1 auStackY_2e8 [32];
  FName local_2b8;
  int local_2b0;
  FName local_2a8;
  int local_2a0;
  FName local_298;
  int local_290;
  FName local_288;
  int local_280;
  FDS_StringBaseID local_278;
  FLinearColor local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_258._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_VM_Chat_CustomFilterSlot::UpdateCustomFilterSlot",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_258.Ptr,0x57,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)local_258._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
  }
  else if ((this->ChatCustomFilter).Object == (FDS_ChatCustomFilter *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_CustomFilterSlot::UpdateCustomFilterSlot",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_138.Ptr,0x5d,L"ChatCustomFilter.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetChattingChannelName(this_00,&local_278,this->ChattingType);
    FDS_Text::SetTextFromStringID(&this->ChattingTypeName,&local_278);
    local_2b0 = FFieldNotificationClassDescriptor::ChattingTypeName.BitNumber;
    local_2b8 = FFieldNotificationClassDescriptor::ChattingTypeName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
    iVar8 = UDS_ChattingManager::GetChatIconID(this_00,this->ChattingType);
    iVar6 = FFieldNotificationClassDescriptor::ChattingTypeIconID.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::ChattingTypeIconID.FieldName;
    if (this->ChattingTypeIconID != iVar8) {
      this->ChattingTypeIconID = iVar8;
      local_2a0 = iVar6;
      local_2a8 = FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2a8);
    }
    pFVar10 = UDS_ChattingManager::GetChattingColor(this_00,&local_268,this->ChattingType);
    if (((((pFVar10->field0_0x0)._s_0.R != (this->ChattingTypeColor).field0_0x0._s_0.R) ||
         ((pFVar10->field0_0x0)._s_0.G != (this->ChattingTypeColor).field0_0x0._s_0.G)) ||
        ((pFVar10->field0_0x0)._s_0.B != (this->ChattingTypeColor).field0_0x0._s_0.B)) ||
       ((pFVar10->field0_0x0)._s_0.A != (this->ChattingTypeColor).field0_0x0._s_0.A)) {
      fVar2 = (pFVar10->field0_0x0)._s_0.G;
      fVar3 = (pFVar10->field0_0x0)._s_0.B;
      fVar4 = (pFVar10->field0_0x0)._s_0.A;
      local_290 = FFieldNotificationClassDescriptor::ChattingTypeColor.BitNumber;
      local_298 = FFieldNotificationClassDescriptor::ChattingTypeColor.FieldName;
      (this->ChattingTypeColor).field0_0x0._s_0.R = (pFVar10->field0_0x0)._s_0.R;
      (this->ChattingTypeColor).field0_0x0._s_0.G = fVar2;
      (this->ChattingTypeColor).field0_0x0._s_0.B = fVar3;
      (this->ChattingTypeColor).field0_0x0._s_0.A = fVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_298);
    }
    if (((this->ChatCustomFilter).Object == (FDS_ChatCustomFilter *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar7 = FDS_ChatCustomFilter::IsChattingTypeChecked
                      ((this->ChatCustomFilter).Object,this->ChattingType);
    local_280 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    local_288 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    if (this->bIsSelected != bVar7) {
      this->bIsSelected = bVar7;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_288);
    }
  }
  return;
}

