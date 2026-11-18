// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b6e0a10

UClass * __cdecl UDS_VM_SkillPassive::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillPassive.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillPassive",
               &Z_Registration_Info_UClass_UDS_VM_SkillPassive.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillPassive,0x150,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SkillPassive>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillPassive>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillPassive.InnerSingleton;
}

// UDS_VM_SkillPassive @ 14b6e5cf0

UDS_VM_SkillPassive * __thiscall
UDS_VM_SkillPassive::UDS_VM_SkillPassive(UDS_VM_SkillPassive *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillPassive__6B_;
  this->SkillPassiveState = 0;
  (this->NameText).StringTableType = None;
  (this->NameText).StringTableID = 0;
  (this->NameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NameText).StringEnumTableNameID.Number = 0;
  (this->NameText).DateTime.Ticks = 0;
  (this->NameText).TimeSpan.Ticks = 0;
  (this->NameText).TimeExpressionType = None;
  (this->NameText).IsExpression = false;
  (this->NameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameText).UniqueString.Data.ArrayNum = 0;
  (this->NameText).UniqueString.Data.ArrayMax = 0;
  (this->NameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameText).FormatArgs.ArrayNum = 0;
  (this->NameText).FormatArgs.ArrayMax = 0;
  (this->DescText).StringTableType = None;
  (this->DescText).StringTableID = 0;
  (this->DescText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DescText).StringEnumTableNameID.Number = 0;
  (this->DescText).DateTime.Ticks = 0;
  (this->DescText).TimeSpan.Ticks = 0;
  (this->DescText).TimeExpressionType = None;
  (this->DescText).IsExpression = false;
  (this->DescText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescText).UniqueString.Data.ArrayNum = 0;
  (this->DescText).UniqueString.Data.ArrayMax = 0;
  (this->DescText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescText).FormatArgs.ArrayNum = 0;
  (this->DescText).FormatArgs.ArrayMax = 0;
  this->IsNew = false;
  this->IsEnhance = false;
  return this;
}

// UDS_VM_SkillPassive @ 14b6e5dd0

UDS_VM_SkillPassive * __thiscall
UDS_VM_SkillPassive::UDS_VM_SkillPassive(UDS_VM_SkillPassive *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillPassive__6B_;
  this->SkillPassiveState = 0;
  (this->NameText).StringTableType = None;
  (this->NameText).StringTableID = 0;
  (this->NameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NameText).StringEnumTableNameID.Number = 0;
  (this->NameText).DateTime.Ticks = 0;
  (this->NameText).TimeSpan.Ticks = 0;
  (this->NameText).TimeExpressionType = None;
  (this->NameText).IsExpression = false;
  (this->NameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameText).UniqueString.Data.ArrayNum = 0;
  (this->NameText).UniqueString.Data.ArrayMax = 0;
  (this->NameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameText).FormatArgs.ArrayNum = 0;
  (this->NameText).FormatArgs.ArrayMax = 0;
  (this->DescText).StringTableType = None;
  (this->DescText).StringTableID = 0;
  (this->DescText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DescText).StringEnumTableNameID.Number = 0;
  (this->DescText).DateTime.Ticks = 0;
  (this->DescText).TimeSpan.Ticks = 0;
  (this->DescText).TimeExpressionType = None;
  (this->DescText).IsExpression = false;
  (this->DescText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescText).UniqueString.Data.ArrayNum = 0;
  (this->DescText).UniqueString.Data.ArrayMax = 0;
  (this->DescText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescText).FormatArgs.ArrayNum = 0;
  (this->DescText).FormatArgs.ArrayMax = 0;
  this->IsNew = false;
  this->IsEnhance = false;
  return this;
}

// ~UDS_VM_SkillPassive @ 14b6e7280

void __thiscall UDS_VM_SkillPassive::~UDS_VM_SkillPassive(UDS_VM_SkillPassive *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillPassive__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DescText).FormatArgs.AllocatorInstance.Data,
             (this->DescText).FormatArgs.ArrayNum);
  pFVar1 = (this->DescText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DescText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NameText).FormatArgs.AllocatorInstance.Data,
             (this->NameText).FormatArgs.ArrayNum);
  pFVar1 = (this->NameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e9830

IClassDescriptor * __thiscall
UDS_VM_SkillPassive::GetFieldNotificationDescriptor(UDS_VM_SkillPassive *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_SkillPassive::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea300

UClass * __cdecl UDS_VM_SkillPassive::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillPassive.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillPassive",
               &Z_Registration_Info_UClass_UDS_VM_SkillPassive.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillPassive,0x150,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SkillPassive>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillPassive>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillPassive.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_SkillPassive @ 14b6eac40

void __cdecl UDS_VM_SkillPassive::StaticRegisterNativesUDS_VM_SkillPassive(void)

{
  return;
}

// OnSetViewModel @ 14be3f670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_SkillPassive::OnSetViewModel
          (UDS_VM_SkillPassive *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FDS_SkillPassiveTableRow *this_00;
  FDS_SkillTableRow *this_01;
  FDS_SkillActLevelTableRow *this_02;
  longlong lVar5;
  FName *pFVar6;
  undefined1 auStackY_1e8 [32];
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  TSharedPtr<FDS_ViewModelContext_SkillPassive,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
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
  SafeCast<FDS_ViewModelContext_SkillPassive>(&local_168,&local_158);
  if (local_168.Object == (FDS_ViewModelContext_SkillPassive *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)local_168.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_SkillPassive::OnSetViewModel",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x15,L"context is nullptr.");
      if ((FDS_ViewModelContext_SkillPassive *)local_148._padding_ !=
          (FDS_ViewModelContext_SkillPassive *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    goto LAB_14be3f968;
  }
  if ((local_168.Object)->PassiveState == SkillPassive) {
    if (0 < (local_168.Object)->PassiveID) {
      this_00 = FDS_SkillPassiveTableRow::GetRef((longlong)(local_168.Object)->PassiveID,true);
      bVar3 = FDS_SkillPassiveTableRow::IsValid(this_00);
      if (bVar3) {
        FDS_Text::SetTextFromStringID(&this->NameText,&this_00->ID_Name);
        FDS_Text::SetTextFromStringID(&this->DescText,&this_00->ID_Explain);
        local_1b0 = FFieldNotificationClassDescriptor::NameText.BitNumber;
        local_1b8 = FFieldNotificationClassDescriptor::NameText.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
        pFVar6 = &local_1a8;
        local_1a0 = FFieldNotificationClassDescriptor::DescText.BitNumber;
        lVar5 = this->_padding_;
        local_1a8 = FFieldNotificationClassDescriptor::DescText.FieldName;
LAB_14be3f8bb:
        (**(code **)(lVar5 + 0x38))(&this->_padding_,pFVar6);
      }
    }
  }
  else if ((local_168.Object)->PassiveState == SkillActLevel) {
    this_01 = FDS_SkillTableRow::GetRef((longlong)(local_168.Object)->SkillID,true);
    bVar3 = FDS_SkillTableRow::IsValid(this_01);
    if (bVar3) {
      FDS_Text::SetTextFromStringID(&this->NameText,&this_01->ID_Name);
      local_1a0 = FFieldNotificationClassDescriptor::NameText.BitNumber;
      local_1a8 = FFieldNotificationClassDescriptor::NameText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
    }
    this_02 = FDS_SkillActLevelTableRow::GetRef((longlong)(local_168.Object)->SkillActLevelID,true);
    bVar3 = FDS_SkillActLevelTableRow::IsValid(this_02);
    if (bVar3) {
      FDS_Text::SetTextFromStringID(&this->DescText,&this_02->ID_EffectDesc);
      pFVar6 = &local_1b8;
      local_1b0 = FFieldNotificationClassDescriptor::DescText.BitNumber;
      lVar5 = this->_padding_;
      local_1b8 = FFieldNotificationClassDescriptor::DescText.FieldName;
      goto LAB_14be3f8bb;
    }
  }
  FVar2 = FFieldNotificationClassDescriptor::IsNew.FieldName;
  if (this->IsNew != (local_168.Object)->IsNew) {
    local_190 = FFieldNotificationClassDescriptor::IsNew.BitNumber;
    this->IsNew = (local_168.Object)->IsNew;
    local_198 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
  }
  FVar2 = FFieldNotificationClassDescriptor::IsEnhance.FieldName;
  if (this->IsEnhance != (local_168.Object)->IsEnhance) {
    local_180 = FFieldNotificationClassDescriptor::IsEnhance.BitNumber;
    this->IsEnhance = (local_168.Object)->IsEnhance;
    local_188 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
  }
  FVar2 = FFieldNotificationClassDescriptor::SkillPassiveState.FieldName;
  if (this->SkillPassiveState != (local_168.Object)->PassiveState) {
    local_170 = FFieldNotificationClassDescriptor::SkillPassiveState.BitNumber;
    this->SkillPassiveState = (local_168.Object)->PassiveState;
    local_178 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
  }
LAB_14be3f968:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

