// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 36

// SetItemIconID_WrapperImpl @ 14b635470

void __cdecl UDS_VM_DropData::SetItemIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetItemIconID(param_1,*(int *)param_2);
  return;
}

// SetItemGradeSwitcherIndex_WrapperImpl @ 14b635480

void __cdecl UDS_VM_DropData::SetItemGradeSwitcherIndex_WrapperImpl(void *param_1,void *param_2)

{
  SetItemGradeSwitcherIndex(param_1,*(int *)param_2);
  return;
}

// SetItemName_WrapperImpl @ 14b635490

void __cdecl UDS_VM_DropData::SetItemName_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ItemName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ItemName.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa8),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetDropItemTextIcon_WrapperImpl @ 14b6354a0

void __cdecl UDS_VM_DropData::SetDropItemTextIcon_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined8 *)((longlong)param_1 + 0x108) = *(undefined8 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::DropItemTextIcon.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::DropItemTextIcon.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetQuantityByBuff_WrapperImpl @ 14b6354b0

void __cdecl UDS_VM_DropData::SetQuantityByBuff_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::QuantityByBuff.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::QuantityByBuff.FieldName;
  iVar3 = *(int *)((longlong)param_1 + 0x118);
  if (iVar3 == *(int *)((longlong)param_2 + 8)) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)((longlong)param_1 + 0x110),*(wchar_t **)param_2);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + *(int *)((longlong)param_2 + 8) == 1;
  }
  if (!bVar4) {
    ::FString::operator=((FString *)((longlong)param_1 + 0x110),param_2);
    FStack_18 = FVar1;
    iStack_10 = iVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetVisibleItemQuantity_WrapperImpl @ 14b6354c0

void __cdecl UDS_VM_DropData::SetVisibleItemQuantity_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibleItemQuantity(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetVisibleQuantityByBuff_WrapperImpl @ 14b6354d0

void __cdecl UDS_VM_DropData::SetVisibleQuantityByBuff_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibleQuantityByBuff(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetVisibleDropItemType_WrapperImpl @ 14b6354e0

void __cdecl UDS_VM_DropData::SetVisibleDropItemType_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibleDropItemType(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetVisibleItemName_WrapperImpl @ 14b6354f0

void __cdecl UDS_VM_DropData::SetVisibleItemName_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibleItemName(param_1,*(ESlateVisibility *)param_2);
  return;
}

// StaticClass @ 14b635500

UClass * __cdecl UDS_VM_DropData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_DropData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_DropData",
               &Z_Registration_Info_UClass_UDS_VM_DropData.InnerSingleton,
               StaticRegisterNativesUDS_VM_DropData,0x158,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_DropData>,InternalVTableHelperCtorCaller<UDS_VM_DropData>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_DropData.InnerSingleton;
}

// UDS_VM_DropData @ 14b63a470

UDS_VM_DropData * __thiscall
UDS_VM_DropData::UDS_VM_DropData(UDS_VM_DropData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_DropData__6B_;
  (this->ItemName).StringTableID = 0;
  (this->ItemName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ItemName).StringEnumTableNameID.Number = 0;
  (this->ItemName).DateTime.Ticks = 0;
  (this->ItemName).TimeSpan.Ticks = 0;
  (this->ItemName).TimeExpressionType = None;
  (this->ItemName).IsExpression = false;
  (this->ItemName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemName).UniqueString.Data.ArrayNum = 0;
  (this->ItemName).UniqueString.Data.ArrayMax = 0;
  (this->ItemName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemName).FormatArgs.ArrayNum = 0;
  (this->ItemName).FormatArgs.ArrayMax = 0;
  (this->ItemQuantityString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemQuantityString).Data.ArrayNum = 0;
  (this->ItemQuantityString).Data.ArrayMax = 0;
  (this->DropItemTextIcon).TextIconID = 0;
  (this->QuantityByBuff).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuantityByBuff).Data.ArrayNum = 0;
  (this->QuantityByBuff).Data.ArrayMax = 0;
  this->Exp = 0;
  this->ItemTID = 0;
  this->ItemQuantity = 0;
  this->MoneyType = 0;
  this->MoneyQuantity = 0;
  this->bIsLuck = false;
  this->bIsNaturalHistory = false;
  (this->ItemName).StringTableType = None;
  return this;
}

// UDS_VM_DropData @ 14b63a550

UDS_VM_DropData * __thiscall
UDS_VM_DropData::UDS_VM_DropData(UDS_VM_DropData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_DropData__6B_;
  (this->ItemName).StringTableID = 0;
  (this->ItemName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ItemName).StringEnumTableNameID.Number = 0;
  (this->ItemName).DateTime.Ticks = 0;
  (this->ItemName).TimeSpan.Ticks = 0;
  (this->ItemName).TimeExpressionType = None;
  (this->ItemName).IsExpression = false;
  (this->ItemName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemName).UniqueString.Data.ArrayNum = 0;
  (this->ItemName).UniqueString.Data.ArrayMax = 0;
  (this->ItemName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemName).FormatArgs.ArrayNum = 0;
  (this->ItemName).FormatArgs.ArrayMax = 0;
  (this->ItemQuantityString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemQuantityString).Data.ArrayNum = 0;
  (this->ItemQuantityString).Data.ArrayMax = 0;
  (this->DropItemTextIcon).TextIconID = 0;
  (this->QuantityByBuff).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuantityByBuff).Data.ArrayNum = 0;
  (this->QuantityByBuff).Data.ArrayMax = 0;
  this->Exp = 0;
  this->ItemTID = 0;
  this->ItemQuantity = 0;
  this->MoneyType = 0;
  this->MoneyQuantity = 0;
  this->bIsLuck = false;
  this->bIsNaturalHistory = false;
  (this->ItemName).StringTableType = None;
  return this;
}

// ~UDS_VM_DropData @ 14b63c8f0

void __thiscall UDS_VM_DropData::~UDS_VM_DropData(UDS_VM_DropData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_DropData__6B_;
  pFVar1 = (this->QuantityByBuff).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemQuantityString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ItemName).FormatArgs.AllocatorInstance.Data,
             (this->ItemName).FormatArgs.ArrayNum);
  pFVar1 = (this->ItemName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f370

IClassDescriptor * __thiscall UDS_VM_DropData::GetFieldNotificationDescriptor(UDS_VM_DropData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_DropData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b63fcd0

UClass * __cdecl UDS_VM_DropData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_DropData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_DropData",
               &Z_Registration_Info_UClass_UDS_VM_DropData.InnerSingleton,
               StaticRegisterNativesUDS_VM_DropData,0x158,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_DropData>,InternalVTableHelperCtorCaller<UDS_VM_DropData>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_DropData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_DropData @ 14b640aa0

void __cdecl UDS_VM_DropData::StaticRegisterNativesUDS_VM_DropData(void)

{
  return;
}

// OnSetViewModel @ 14bddaef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_DropData::OnSetViewModel(UDS_VM_DropData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext_DropData,1> local_168;
  FWeakObjectPtr local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_150;
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
  local_150.Object = param_1->Object;
  local_150.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_150.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_150.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_150.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_DropData>(&local_168,&local_150);
  if (local_168.Object == (FDS_ViewModelContext_DropData *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_DropData::OnSetViewModel",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x17,L"dropDataContext is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_168.Object == (FDS_ViewModelContext_DropData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UDS_DropData::GetData
              ((ulong64)&local_158,UDS_PlayerData::MainPlayerEntityID,
               SUB81((local_168.Object)->DropDataUID,0));
    SetDropData(this,(TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)local_158);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Reset @ 14bde3300

void __thiscall UDS_VM_DropData::Reset(UDS_VM_DropData *this)

{
  FName local_18;
  int local_10;
  
  this->Exp = 0;
  this->ItemTID = 0;
  this->ItemQuantity = 0;
  this->MoneyType = 0;
  this->MoneyQuantity = 0;
  this->bIsLuck = false;
  local_10 = FFieldNotificationClassDescriptor::ItemGradeSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemGradeSwitcherIndex.FieldName;
  this->bIsNaturalHistory = false;
  if (this->ItemGradeSwitcherIndex != 0) {
    this->ItemGradeSwitcherIndex = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  (this->DropItemTextIcon).TextIconID = 0;
  local_10 = FFieldNotificationClassDescriptor::DropItemTextIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DropItemTextIcon.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleDropItemType.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleDropItemType.FieldName;
  if (this->VisibleDropItemType != Collapsed) {
    this->VisibleDropItemType = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDropData @ 14bde5590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_DropData::SetDropData
          (UDS_VM_DropData *this,TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> param_1)

{
  char cVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  ESlateVisibility EVar7;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_188 [32];
  FName local_158;
  int local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this->Exp = 0;
  this->ItemTID = 0;
  this->ItemQuantity = 0;
  this->MoneyType = 0;
  this->MoneyQuantity = 0;
  this->bIsLuck = false;
  local_150 = FFieldNotificationClassDescriptor::ItemGradeSwitcherIndex.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::ItemGradeSwitcherIndex.FieldName;
  this->bIsNaturalHistory = false;
  local_res10 = param_1.WeakPtr;
  if (this->ItemGradeSwitcherIndex != 0) {
    this->ItemGradeSwitcherIndex = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  }
  (this->DropItemTextIcon).TextIconID = 0;
  local_150 = FFieldNotificationClassDescriptor::DropItemTextIcon.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::DropItemTextIcon.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  iVar3 = FFieldNotificationClassDescriptor::VisibleDropItemType.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::VisibleDropItemType.FieldName;
  if (this->VisibleDropItemType != Collapsed) {
    this->VisibleDropItemType = Collapsed;
    local_150 = iVar3;
    local_158 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  }
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_DropData::SetDropData",0x1c,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x26,L"dropData is invalid");
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  iVar3 = FFieldNotificationClassDescriptor::VisibleQuantityByBuff.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::VisibleQuantityByBuff.FieldName;
  EVar7 = Collapsed;
  if (0 < *(int *)&pUVar6[3].field_0x4) {
    EVar7 = HitTestInvisible;
  }
  if (this->VisibleQuantityByBuff != EVar7) {
    this->VisibleQuantityByBuff = EVar7;
    local_150 = iVar3;
    local_158 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  }
  iVar3 = FFieldNotificationClassDescriptor::VisibleItemName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::VisibleItemName.FieldName;
  if (this->VisibleItemName != SelfHitTestInvisible) {
    this->VisibleItemName = SelfHitTestInvisible;
    local_150 = iVar3;
    local_158 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  cVar1 = pUVar6[3].field_0xa;
  if (cVar1 == '\x01') {
LAB_14bde5804:
    SetExp(this,(TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)local_res10);
  }
  else if (cVar1 == '\x02') {
    SetPlayerSkillExpInfo(this,(TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)local_res10);
  }
  else {
    if (cVar1 == '\x03') goto LAB_14bde5804;
    if (cVar1 == '\x04') {
      SetMoneyInfo(this,(TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)local_res10);
    }
    else if (cVar1 == '\x05') {
      SetItemInfo(this,(TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)local_res10);
    }
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  bVar4 = (bool)pUVar6[3].field_0x8;
  this->bIsLuck = bVar4;
  iVar3 = FFieldNotificationClassDescriptor::VisibleDropItemType.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::VisibleDropItemType.FieldName;
  if ((bVar4 == true) || (this->bIsNaturalHistory == true)) {
    if (this->VisibleDropItemType != SelfHitTestInvisible) {
      this->VisibleDropItemType = SelfHitTestInvisible;
      goto LAB_14bde5878;
    }
  }
  else if (this->VisibleDropItemType != Collapsed) {
    this->VisibleDropItemType = Collapsed;
LAB_14bde5878:
    local_150 = iVar3;
    local_158 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  bVar4 = (bool)pUVar6[3].field_0x9;
  this->bIsNaturalHistory = bVar4;
  local_150 = FFieldNotificationClassDescriptor::VisibleDropItemType.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::VisibleDropItemType.FieldName;
  if ((bVar4 == true) || (this->bIsLuck == true)) {
    if (this->VisibleDropItemType == SelfHitTestInvisible) goto LAB_14bde5911;
    this->VisibleDropItemType = SelfHitTestInvisible;
  }
  else {
    if (this->VisibleDropItemType == Collapsed) goto LAB_14bde5911;
    this->VisibleDropItemType = Collapsed;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
LAB_14bde5911:
  if (this->bIsLuck == true) {
    (this->DropItemTextIcon).TextIconID = 0xbb9;
  }
  else if (this->bIsNaturalHistory == true) {
    (this->DropItemTextIcon).TextIconID = 0xbba;
  }
  else {
    (this->DropItemTextIcon).TextIconID = 0;
  }
  local_150 = FFieldNotificationClassDescriptor::DropItemTextIcon.BitNumber;
  local_158 = FFieldNotificationClassDescriptor::DropItemTextIcon.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  return;
}

// SetDropItemTextIcon @ 14bde59a0

void __thiscall UDS_VM_DropData::SetDropItemTextIcon(UDS_VM_DropData *this,FDS_TextIcon *param_1)

{
  FName local_18;
  int local_10;
  
  (this->DropItemTextIcon).TextIconID = param_1->TextIconID;
  local_10 = FFieldNotificationClassDescriptor::DropItemTextIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DropItemTextIcon.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetExp @ 14bde61a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_DropData::SetExp(UDS_VM_DropData *this,TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_CommonContentsInfoTableRow *pFVar6;
  uint uVar7;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_1e8 [32];
  FName local_1b8;
  int local_1b0;
  FDS_Text local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    this->Exp = *(long64 *)&pUVar5[2].field_0x8;
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    uVar7 = 1;
    if (pUVar5[3].field_0xa == '\x03') {
      uVar7 = 3;
    }
    pFVar6 = FDS_CommonContentsInfoTableRow::GetRef((ulonglong)uVar7,true);
    iVar2 = FFieldNotificationClassDescriptor::ItemIconID.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::ItemIconID.FieldName;
    if (this->ItemIconID != pFVar6->ID_Icon) {
      this->ItemIconID = pFVar6->ID_Icon;
      local_1b0 = iVar2;
      local_1b8 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
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
    FDS_Text::SetTextFromStringID(&local_1a8,&pFVar6->ID_Name);
    iVar2 = FFieldNotificationClassDescriptor::ItemName.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::ItemName.FieldName;
    FDS_Text::operator=(&this->ItemName,&local_1a8);
    local_1b8 = FVar1;
    local_1b0 = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data,
               local_1a8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1a8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_1a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.UniqueString.Data.AllocatorInstance.Data);
    }
    SetItemQuantity(this,this->Exp);
    local_1b0 = FFieldNotificationClassDescriptor::VisibleItemName.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::VisibleItemName.FieldName;
    if (this->VisibleItemName != SelfHitTestInvisible) {
      this->VisibleItemName = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
    local_1b0 = FFieldNotificationClassDescriptor::VisibleItemQuantity.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::VisibleItemQuantity.FieldName;
    if (this->VisibleItemQuantity != SelfHitTestInvisible) {
      this->VisibleItemQuantity = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_DropData::SetExp",0x17,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x4e,L"dropData is invalid");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  return;
}

// SetIsLuck @ 14bde6880

void __thiscall UDS_VM_DropData::SetIsLuck(UDS_VM_DropData *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsLuck = param_1;
  local_10 = FFieldNotificationClassDescriptor::VisibleDropItemType.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleDropItemType.FieldName;
  if ((param_1) || (this->bIsNaturalHistory == true)) {
    if (this->VisibleDropItemType == SelfHitTestInvisible) {
      return;
    }
    this->VisibleDropItemType = SelfHitTestInvisible;
  }
  else {
    if (this->VisibleDropItemType == Collapsed) {
      return;
    }
    this->VisibleDropItemType = Collapsed;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsNaturalHistory @ 14bde6950

void __thiscall UDS_VM_DropData::SetIsNaturalHistory(UDS_VM_DropData *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsNaturalHistory = param_1;
  local_10 = FFieldNotificationClassDescriptor::VisibleDropItemType.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleDropItemType.FieldName;
  if ((param_1) || (this->bIsLuck == true)) {
    if (this->VisibleDropItemType == SelfHitTestInvisible) {
      return;
    }
    this->VisibleDropItemType = SelfHitTestInvisible;
  }
  else {
    if (this->VisibleDropItemType == Collapsed) {
      return;
    }
    this->VisibleDropItemType = Collapsed;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetItemGradeSwitcherIndex @ 14bde6de0

void __thiscall UDS_VM_DropData::SetItemGradeSwitcherIndex(UDS_VM_DropData *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ItemGradeSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemGradeSwitcherIndex.FieldName;
  if (this->ItemGradeSwitcherIndex != param_1) {
    this->ItemGradeSwitcherIndex = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetItemIconID @ 14bde6e30

void __thiscall UDS_VM_DropData::SetItemIconID(UDS_VM_DropData *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ItemIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemIconID.FieldName;
  if (this->ItemIconID != param_1) {
    this->ItemIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetItemInfo @ 14bde6e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_DropData::SetItemInfo
          (UDS_VM_DropData *this,TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_ItemBaseTableRow *pFVar7;
  ESlateVisibility EVar8;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_1e8 [32];
  FName local_1b8;
  int local_1b0;
  FDS_Text local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    this->ItemTID = *(long64 *)&pUVar6[2].field_0x20;
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    this->ItemQuantity = (longlong)*(int *)(pUVar6 + 3);
    pFVar7 = FDS_ItemBaseTableRow::GetRef(this->ItemTID,true);
    iVar2 = FFieldNotificationClassDescriptor::ItemIconID.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::ItemIconID.FieldName;
    if (this->ItemIconID != pFVar7->ID_Icon) {
      this->ItemIconID = pFVar7->ID_Icon;
      local_1b0 = iVar2;
      local_1b8 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
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
    FDS_Text::SetTextFromStringID(&local_1a8,&pFVar7->ID_Name);
    iVar2 = FFieldNotificationClassDescriptor::ItemName.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::ItemName.FieldName;
    FDS_Text::operator=(&this->ItemName,&local_1a8);
    local_1b8 = FVar1;
    local_1b0 = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data,
               local_1a8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1a8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_1a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar2 = FFieldNotificationClassDescriptor::ItemGradeSwitcherIndex.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::ItemGradeSwitcherIndex.FieldName;
    iVar4 = pFVar7->ID_GradeType - 1;
    if (this->ItemGradeSwitcherIndex != iVar4) {
      this->ItemGradeSwitcherIndex = iVar4;
      local_1b0 = iVar2;
      local_1b8 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
    SetItemQuantity(this,this->ItemQuantity);
    local_1b0 = FFieldNotificationClassDescriptor::VisibleItemQuantity.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::VisibleItemQuantity.FieldName;
    EVar8 = Collapsed;
    if (1 < this->ItemQuantity) {
      EVar8 = SelfHitTestInvisible;
    }
    if (this->VisibleItemQuantity != EVar8) {
      this->VisibleItemQuantity = EVar8;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
    local_1b0 = FFieldNotificationClassDescriptor::VisibleItemName.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::VisibleItemName.FieldName;
    if (this->VisibleItemName != SelfHitTestInvisible) {
      this->VisibleItemName = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_DropData::SetItemInfo",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x65,L"dropData is invalid");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  return;
}

// SetItemName @ 14bde7180

void __thiscall UDS_VM_DropData::SetItemName(UDS_VM_DropData *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ItemName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ItemName.FieldName;
  FDS_Text::operator=(&this->ItemName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetItemQuantity @ 14bde71e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_DropData::SetItemQuantity(UDS_VM_DropData *this,long64 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  UDS_LogManager *pUVar5;
  bool bVar6;
  undefined1 auStackY_1a8 [32];
  FName local_168;
  int local_160;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this->ItemQuantity = param_1;
  iVar2 = FFieldNotificationClassDescriptor::ItemQuantityString.BitNumber;
  local_168 = FFieldNotificationClassDescriptor::ItemQuantityString.FieldName;
  pFVar4 = DS_Util::FromInt64(&local_158,param_1);
  iVar3 = (this->ItemQuantityString).Data.ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) goto LAB_14bde728b;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->ItemQuantityString).Data.AllocatorInstance.Data,
                       (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
    bVar6 = iVar3 == 0;
  }
  else {
    bVar6 = iVar3 + iVar1 == 1;
  }
  if (!bVar6) {
    ::FString::operator=(&this->ItemQuantityString,pFVar4);
    local_160 = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  }
LAB_14bde728b:
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_DropData::SetItemQuantity",0x20,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Display,local_148.Ptr,0xb6,
               L"[DropItem] SetItemQuantity - ItemID : %lld, Quantity : %s");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return;
}

// SetItemQuantityString @ 14bde7370

void __thiscall UDS_VM_DropData::SetItemQuantityString(UDS_VM_DropData *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::ItemQuantityString.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ItemQuantityString.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->ItemQuantityString).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->ItemQuantityString).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->ItemQuantityString,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMoneyInfo @ 14bde7720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_DropData::SetMoneyInfo
          (UDS_VM_DropData *this,TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_MoneyBaseTableRow *pFVar6;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_1e8 [32];
  FName local_1b8;
  int local_1b0;
  FDS_Text local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    this->MoneyType = *(long64 *)&pUVar5[2].field_0x10;
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    this->MoneyQuantity = *(long64 *)&pUVar5[2].field_0x18;
    pFVar6 = FDS_MoneyBaseTableRow::GetRef(this->MoneyType,true);
    iVar2 = FFieldNotificationClassDescriptor::ItemIconID.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::ItemIconID.FieldName;
    if (this->ItemIconID != pFVar6->ID_MoneyIcon) {
      this->ItemIconID = pFVar6->ID_MoneyIcon;
      local_1b0 = iVar2;
      local_1b8 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
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
    FDS_Text::SetTextFromStringID(&local_1a8,&pFVar6->ID_MoneyName);
    iVar2 = FFieldNotificationClassDescriptor::ItemName.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::ItemName.FieldName;
    FDS_Text::operator=(&this->ItemName,&local_1a8);
    local_1b8 = FVar1;
    local_1b0 = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data,
               local_1a8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1a8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_1a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.UniqueString.Data.AllocatorInstance.Data);
    }
    SetItemQuantity(this,this->MoneyQuantity);
    local_1b0 = FFieldNotificationClassDescriptor::VisibleItemQuantity.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::VisibleItemQuantity.FieldName;
    if (this->VisibleItemQuantity != SelfHitTestInvisible) {
      this->VisibleItemQuantity = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
    local_1b0 = FFieldNotificationClassDescriptor::VisibleItemName.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::VisibleItemName.FieldName;
    if (this->VisibleItemName != SelfHitTestInvisible) {
      this->VisibleItemName = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_DropData::SetMoneyInfo",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x7d,L"dropData is invalid");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  return;
}

// SetPlayerSkillExpInfo @ 14bde8270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_DropData::SetPlayerSkillExpInfo
          (UDS_VM_DropData *this,TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> param_1)

{
  FInstancedStruct *pFVar1;
  FObjectPtr_u_0 FVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FDS_PlayerSkillBaseTableRow *pFVar8;
  FObjectPtr_u_0 *pFVar9;
  FDS_StringBaseIDFormatArg *pFVar10;
  longlong lVar11;
  FDS_Int64StringFormatArg *pFVar12;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_1e8 [32];
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_1b8;
  FDS_Text local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    this->Exp = *(long64 *)&pUVar7[2].field_0x8;
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    pFVar8 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)(byte)pUVar7[3].field_0xb,true);
    local_1b8.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::ItemIconID.FieldName;
    if (this->ItemIconID != pFVar8->ID_SkillIcon) {
      local_1b8.ArrayNum = FFieldNotificationClassDescriptor::ItemIconID.BitNumber;
      this->ItemIconID = pFVar8->ID_SkillIcon;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
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
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1b8.AllocatorInstance,&local_1b8.ArrayMax);
    pFVar1 = (FInstancedStruct *)(local_1b8.AllocatorInstance.Data + (longlong)iVar5 * 0x28);
    local_1b8.ArrayNum = iVar5 + 1;
    FInstancedStruct::FInstancedStruct(pFVar1);
    pFVar9 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar2 = pFVar9[1];
    pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar9;
    pFVar1[1].StructMemory = (uchar *)FVar2;
    pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar9[2];
    FInstancedStruct::InitializeAs<FDS_StringBaseIDFormatArg>(pFVar1);
    pFVar10 = FInstancedStruct::GetMutablePtr<FDS_StringBaseIDFormatArg>(pFVar1);
    if (pFVar10 != (FDS_StringBaseIDFormatArg *)0x0) {
      (pFVar10->Value).ID = (pFVar8->ID_SkillName).ID;
    }
    if (local_1b8.ArrayNum == local_1b8.ArrayMax) {
      local_1b8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x828,&local_1b8.AllocatorInstance,&local_1b8.ArrayMax);
    }
    lVar11 = (longlong)local_1b8.ArrayNum;
    local_1b8.ArrayNum = local_1b8.ArrayNum + 1;
    pFVar1 = (FInstancedStruct *)(local_1b8.AllocatorInstance.Data + lVar11 * 0x28);
    FInstancedStruct::FInstancedStruct(pFVar1);
    pFVar9 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar2 = pFVar9[1];
    pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar9;
    pFVar1[1].StructMemory = (uchar *)FVar2;
    pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar9[2];
    FInstancedStruct::InitializeAs<FDS_Int64StringFormatArg>(pFVar1);
    pFVar12 = FInstancedStruct::GetMutablePtr<FDS_Int64StringFormatArg>(pFVar1);
    if (pFVar12 != (FDS_Int64StringFormatArg *)0x0) {
      pFVar12->Value = this->Exp;
    }
    FDS_Text::SetTextFormatFromStringTable(&local_1a8,StringUi,0x4bb08,&local_1b8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    if ((FDS_TextFormatArg *)local_1b8.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    iVar5 = FFieldNotificationClassDescriptor::ItemName.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::ItemName.FieldName;
    FDS_Text::operator=(&this->ItemName,&local_1a8);
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)FVar3;
    local_1b8.ArrayNum = iVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data,
               local_1a8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1a8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_1a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar5 = FFieldNotificationClassDescriptor::VisibleItemName.BitNumber;
    local_1b8.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::VisibleItemName.FieldName;
    if (this->VisibleItemName != SelfHitTestInvisible) {
      this->VisibleItemName = SelfHitTestInvisible;
      local_1b8.ArrayNum = iVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
    iVar5 = FFieldNotificationClassDescriptor::VisibleItemQuantity.BitNumber;
    local_1b8.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::VisibleItemQuantity.FieldName
    ;
    if (this->VisibleItemQuantity != Collapsed) {
      this->VisibleItemQuantity = Collapsed;
      local_1b8.ArrayNum = iVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_DropData::SetPlayerSkillExpInfo",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x94,L"dropData is invalid");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  return;
}

// SetQuantityByBuff @ 14bde86a0

void __thiscall UDS_VM_DropData::SetQuantityByBuff(UDS_VM_DropData *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::QuantityByBuff.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::QuantityByBuff.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->QuantityByBuff).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->QuantityByBuff).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->QuantityByBuff,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleDropItemType @ 14bdea3a0

void __thiscall
UDS_VM_DropData::SetVisibleDropItemType(UDS_VM_DropData *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleDropItemType.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleDropItemType.FieldName;
  if (this->VisibleDropItemType != param_1) {
    this->VisibleDropItemType = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleItemName @ 14bdea580

void __thiscall UDS_VM_DropData::SetVisibleItemName(UDS_VM_DropData *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleItemName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleItemName.FieldName;
  if (this->VisibleItemName != param_1) {
    this->VisibleItemName = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleItemQuantity @ 14bdea5d0

void __thiscall
UDS_VM_DropData::SetVisibleItemQuantity(UDS_VM_DropData *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleItemQuantity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleItemQuantity.FieldName;
  if (this->VisibleItemQuantity != param_1) {
    this->VisibleItemQuantity = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleQuantityByBuff @ 14bdea620

void __thiscall
UDS_VM_DropData::SetVisibleQuantityByBuff(UDS_VM_DropData *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleQuantityByBuff.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleQuantityByBuff.FieldName;
  if (this->VisibleQuantityByBuff != param_1) {
    this->VisibleQuantityByBuff = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

