// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b72fca0

UClass * __cdecl UDS_VM_W_Common_LevelGauge::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_LevelGauge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_LevelGauge",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_LevelGauge.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_LevelGauge,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_LevelGauge>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_LevelGauge>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_LevelGauge.InnerSingleton;
}

// UDS_VM_W_Common_LevelGauge @ 14b734030

UDS_VM_W_Common_LevelGauge * __thiscall
UDS_VM_W_Common_LevelGauge::UDS_VM_W_Common_LevelGauge
          (UDS_VM_W_Common_LevelGauge *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_LevelGauge__6B_;
  this->Level = 0;
  this->AddLevel = 0;
  this->LimitLevel = 0;
  this->Exp = 0;
  this->AddExp = 0;
  this->MaxExp = 0;
  this->ExpRatio = 0.0;
  this->ExpRatioPercent = 0.0;
  this->TargetExpRatioPercent = 0.0;
  this->ExpRatioBeforeLevelUp = 0.0;
  this->ExpRatioAfterLevelUp_Odd = 0.0;
  this->ExpRatioAfterLevelUp_Even = 0.0;
  this->ExpSwitcherIndex = 0;
  this->IsExpAdded = false;
  this->IsLevelUp = false;
  this->IsMaxLevel = false;
  this->IsAddedLevelOdd = false;
  (this->FixedText_MaxLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.Number = 0;
  (this->FixedText_MaxLevel).DateTime.Ticks = 0;
  (this->FixedText_MaxLevel).TimeSpan.Ticks = 0;
  (this->FixedText_MaxLevel).TimeExpressionType = None;
  (this->FixedText_MaxLevel).IsExpression = false;
  (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayNum = 0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayMax = 0;
  (this->FixedText_MaxLevel).StringTableType = StringUi;
  (this->FixedText_MaxLevel).StringTableID = 0x2981c;
  return this;
}

// UDS_VM_W_Common_LevelGauge @ 14b734100

UDS_VM_W_Common_LevelGauge * __thiscall
UDS_VM_W_Common_LevelGauge::UDS_VM_W_Common_LevelGauge
          (UDS_VM_W_Common_LevelGauge *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_LevelGauge__6B_;
  this->Level = 0;
  this->AddLevel = 0;
  this->LimitLevel = 0;
  this->Exp = 0;
  this->AddExp = 0;
  this->MaxExp = 0;
  this->ExpRatio = 0.0;
  this->ExpRatioPercent = 0.0;
  this->TargetExpRatioPercent = 0.0;
  this->ExpRatioBeforeLevelUp = 0.0;
  this->ExpRatioAfterLevelUp_Odd = 0.0;
  this->ExpRatioAfterLevelUp_Even = 0.0;
  this->ExpSwitcherIndex = 0;
  this->IsExpAdded = false;
  this->IsLevelUp = false;
  this->IsMaxLevel = false;
  this->IsAddedLevelOdd = false;
  (this->FixedText_MaxLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.Number = 0;
  (this->FixedText_MaxLevel).DateTime.Ticks = 0;
  (this->FixedText_MaxLevel).TimeSpan.Ticks = 0;
  (this->FixedText_MaxLevel).TimeExpressionType = None;
  (this->FixedText_MaxLevel).IsExpression = false;
  (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayNum = 0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayMax = 0;
  (this->FixedText_MaxLevel).StringTableType = StringUi;
  (this->FixedText_MaxLevel).StringTableID = 0x2981c;
  return this;
}

// ~UDS_VM_W_Common_LevelGauge @ 14b735ee0

void __thiscall
UDS_VM_W_Common_LevelGauge::~UDS_VM_W_Common_LevelGauge(UDS_VM_W_Common_LevelGauge *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_LevelGauge__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_MaxLevel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739130

IClassDescriptor * __thiscall
UDS_VM_W_Common_LevelGauge::GetFieldNotificationDescriptor(UDS_VM_W_Common_LevelGauge *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Common_LevelGauge::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b739cc0

UClass * __cdecl UDS_VM_W_Common_LevelGauge::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_LevelGauge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_LevelGauge",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_LevelGauge.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_LevelGauge,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_LevelGauge>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_LevelGauge>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_LevelGauge.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Common_LevelGauge @ 14b73aec0

void __cdecl UDS_VM_W_Common_LevelGauge::StaticRegisterNativesUDS_VM_W_Common_LevelGauge(void)

{
  return;
}

// DisplayAddExpView @ 14bfa54e0

void __thiscall UDS_VM_W_Common_LevelGauge::DisplayAddExpView(UDS_VM_W_Common_LevelGauge *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ExpSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ExpSwitcherIndex.FieldName;
  if (this->ExpSwitcherIndex != 1) {
    this->ExpSwitcherIndex = 1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// DisplayCurrentLevelView @ 14bfa5530

void __thiscall
UDS_VM_W_Common_LevelGauge::DisplayCurrentLevelView(UDS_VM_W_Common_LevelGauge *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ExpSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ExpSwitcherIndex.FieldName;
  if (this->ExpSwitcherIndex != 0) {
    this->ExpSwitcherIndex = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// DisplayMaxLevelView @ 14bfa5580

void __thiscall UDS_VM_W_Common_LevelGauge::DisplayMaxLevelView(UDS_VM_W_Common_LevelGauge *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ExpSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ExpSwitcherIndex.FieldName;
  if (this->ExpSwitcherIndex != 2) {
    this->ExpSwitcherIndex = 2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bfcaf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_LevelGauge::OnSetViewModel
          (UDS_VM_W_Common_LevelGauge *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  FDS_ViewModelContext_LevelExpGauge *pFVar4;
  bool bVar5;
  uint uVar6;
  UDS_LogManager *pUVar7;
  FName *pFVar8;
  float fVar9;
  float fVar10;
  undefined1 auStackY_2c8 [32];
  TSharedPtr<FDS_ViewModelContext_LevelExpGauge,1> local_298;
  FName local_288;
  int local_280;
  FName local_278;
  int local_270;
  FName local_268;
  int local_260;
  FName local_258;
  int local_250;
  FName local_248;
  int local_240;
  FName local_238;
  int local_230;
  FName local_228;
  int local_220;
  FName local_218;
  int local_210;
  FName local_208;
  int local_200;
  FName local_1f8;
  int local_1f0;
  FName local_1e8;
  int local_1e0;
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  int local_1c0;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext_LevelExpGauge,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_188.Object = param_1->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_188);
  local_178.Object = param_1->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_LevelExpGauge>(&local_298,&local_178);
  pFVar4 = local_298.Object;
  iVar3 = FFieldNotificationClassDescriptor::Level.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Level.FieldName;
  if (local_298.Object == (FDS_ViewModelContext_LevelExpGauge *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = (longlong)local_298.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_Common_LevelGauge::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0x11,L"templateContext is Invalid.");
      if ((FDS_ViewModelContext_LevelExpGauge *)local_158._padding_ !=
          (FDS_ViewModelContext_LevelExpGauge *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    if ((local_298.Object == (FDS_ViewModelContext_LevelExpGauge *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (this->Level != pFVar4->CurLevel) {
      this->Level = pFVar4->CurLevel;
      local_288 = FVar2;
      local_280 = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_288);
    }
    FVar2 = FFieldNotificationClassDescriptor::AddLevel.FieldName;
    if (this->AddLevel != pFVar4->AddLevel) {
      local_270 = FFieldNotificationClassDescriptor::AddLevel.BitNumber;
      this->AddLevel = pFVar4->AddLevel;
      local_278 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_278);
    }
    FVar2 = FFieldNotificationClassDescriptor::LimitLevel.FieldName;
    if (this->LimitLevel != pFVar4->LimitLevel) {
      local_260 = FFieldNotificationClassDescriptor::LimitLevel.BitNumber;
      this->LimitLevel = pFVar4->LimitLevel;
      local_268 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_268);
    }
    FVar2 = FFieldNotificationClassDescriptor::Exp.FieldName;
    if (this->Exp != pFVar4->CurExp) {
      local_250 = FFieldNotificationClassDescriptor::Exp.BitNumber;
      this->Exp = pFVar4->CurExp;
      local_258 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_258);
    }
    FVar2 = FFieldNotificationClassDescriptor::AddExp.FieldName;
    if (this->AddExp != pFVar4->AddExp) {
      local_240 = FFieldNotificationClassDescriptor::AddExp.BitNumber;
      this->AddExp = pFVar4->AddExp;
      local_248 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_248);
    }
    FVar2 = FFieldNotificationClassDescriptor::MaxExp.FieldName;
    if (this->MaxExp != pFVar4->MaxExp) {
      local_230 = FFieldNotificationClassDescriptor::MaxExp.BitNumber;
      this->MaxExp = pFVar4->MaxExp;
      local_238 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
    }
    iVar3 = FFieldNotificationClassDescriptor::ExpRatio.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::ExpRatio.FieldName;
    if (pFVar4->CurExpRatio != this->ExpRatio) {
      this->ExpRatio = pFVar4->CurExpRatio;
      local_220 = iVar3;
      local_228 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_228);
    }
    iVar3 = FFieldNotificationClassDescriptor::ExpRatioPercent.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::ExpRatioPercent.FieldName;
    fVar10 = __real_42c80000;
    fVar9 = this->ExpRatio * __real_42c80000;
    if (fVar9 != this->ExpRatioPercent) {
      this->ExpRatioPercent = fVar9;
      local_210 = iVar3;
      local_218 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
    }
    iVar3 = FFieldNotificationClassDescriptor::TargetExpRatioPercent.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::TargetExpRatioPercent.FieldName;
    fVar10 = ((float)pFVar4->AddLevel + pFVar4->TargetExpRatio) * fVar10;
    if (fVar10 != this->TargetExpRatioPercent) {
      this->TargetExpRatioPercent = fVar10;
      local_200 = iVar3;
      local_208 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_208);
    }
    FVar2 = FFieldNotificationClassDescriptor::IsExpAdded.FieldName;
    if ((this->AddExp < 1) && (this->AddLevel < 1)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (this->IsExpAdded != bVar5) {
      local_1f0 = FFieldNotificationClassDescriptor::IsExpAdded.BitNumber;
      this->IsExpAdded = bVar5;
      local_1f8 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
    }
    FVar2 = FFieldNotificationClassDescriptor::IsLevelUp.FieldName;
    bVar5 = 0 < this->AddLevel;
    if (this->IsLevelUp != bVar5) {
      local_1e0 = FFieldNotificationClassDescriptor::IsLevelUp.BitNumber;
      this->IsLevelUp = bVar5;
      local_1e8 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
    }
    FVar2 = FFieldNotificationClassDescriptor::IsMaxLevel.FieldName;
    bVar5 = pFVar4->CurLevel == pFVar4->MaxLevel;
    if (this->IsMaxLevel != bVar5) {
      local_1d0 = FFieldNotificationClassDescriptor::IsMaxLevel.BitNumber;
      this->IsMaxLevel = bVar5;
      local_1d8 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
    }
    FVar2 = FFieldNotificationClassDescriptor::IsAddedLevelOdd.FieldName;
    uVar6 = this->AddLevel & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    if (this->IsAddedLevelOdd != (uVar6 == 1)) {
      local_1c0 = FFieldNotificationClassDescriptor::IsAddedLevelOdd.BitNumber;
      this->IsAddedLevelOdd = uVar6 == 1;
      local_1c8 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
    }
    local_168.Object = local_298.Object;
    local_168.SharedReferenceCount.ReferenceController =
         local_298.SharedReferenceCount.ReferenceController;
    if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    RefreshExpRatio(this,&local_168);
    iVar3 = FFieldNotificationClassDescriptor::ExpSwitcherIndex.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::ExpSwitcherIndex.FieldName;
    if (this->IsMaxLevel == false) {
      if (this->AddExp < 1) {
        if (this->ExpSwitcherIndex == 0) goto LAB_14bfcb466;
        this->ExpSwitcherIndex = 0;
        pFVar8 = &local_198;
        local_198 = FVar2;
        local_190 = iVar3;
      }
      else {
        if (this->ExpSwitcherIndex == 1) goto LAB_14bfcb466;
        this->ExpSwitcherIndex = 1;
        pFVar8 = &local_1a8;
        local_1a8 = FVar2;
        local_1a0 = iVar3;
      }
    }
    else {
      if (this->ExpSwitcherIndex == 2) goto LAB_14bfcb466;
      this->ExpSwitcherIndex = 2;
      pFVar8 = &local_1b8;
      local_1b8 = FVar2;
      local_1b0 = iVar3;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar8);
  }
LAB_14bfcb466:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RefreshExpRatio @ 14bfd46c0

void __thiscall
UDS_VM_W_Common_LevelGauge::RefreshExpRatio
          (UDS_VM_W_Common_LevelGauge *this,
          TSharedPtr<FDS_ViewModelContext_LevelExpGauge,1> *param_1)

{
  float fVar1;
  FName FVar2;
  int iVar3;
  FDS_ViewModelContext_LevelExpGauge *pFVar4;
  FName *pFVar5;
  float fVar6;
  float fVar7;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  
  iVar3 = FFieldNotificationClassDescriptor::ExpRatioBeforeLevelUp.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ExpRatioBeforeLevelUp.FieldName;
  fVar1 = __real_3f800000;
  if (param_1->Object != (FDS_ViewModelContext_LevelExpGauge *)0x0) {
    if (this->IsLevelUp == true) {
      fVar7 = __real_3f800000;
      if (this->IsAddedLevelOdd != false) {
        pFVar4 = TSharedPtr<FDS_ViewModelContext_LevelExpGauge,1>::operator->(param_1);
        fVar7 = pFVar4->TargetExpRatio;
      }
      fVar6 = 0.0;
      if ((1 < this->AddLevel) && (fVar6 = fVar1, this->IsAddedLevelOdd == false)) {
        pFVar4 = TSharedPtr<FDS_ViewModelContext_LevelExpGauge,1>::operator->(param_1);
        fVar6 = pFVar4->TargetExpRatio;
      }
      iVar3 = FFieldNotificationClassDescriptor::ExpRatioBeforeLevelUp.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::ExpRatioBeforeLevelUp.FieldName;
      if (fVar1 != this->ExpRatioBeforeLevelUp) {
        this->ExpRatioBeforeLevelUp = 1.0;
        local_60 = iVar3;
        local_68 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      }
      iVar3 = FFieldNotificationClassDescriptor::ExpRatioAfterLevelUp_Odd.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::ExpRatioAfterLevelUp_Odd.FieldName;
      if (fVar7 != this->ExpRatioAfterLevelUp_Odd) {
        this->ExpRatioAfterLevelUp_Odd = fVar7;
        local_50 = iVar3;
        local_58 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
      }
      iVar3 = FFieldNotificationClassDescriptor::ExpRatioAfterLevelUp_Even.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::ExpRatioAfterLevelUp_Even.FieldName;
      if (fVar6 == this->ExpRatioAfterLevelUp_Even) goto LAB_14bfd48cc;
      this->ExpRatioAfterLevelUp_Even = fVar6;
      pFVar5 = &local_48;
      local_48 = FVar2;
      local_40 = iVar3;
    }
    else {
      fVar1 = param_1->Object->TargetExpRatio;
      if (fVar1 != this->ExpRatioBeforeLevelUp) {
        this->ExpRatioBeforeLevelUp = fVar1;
        local_40 = iVar3;
        local_48 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
      }
      iVar3 = FFieldNotificationClassDescriptor::ExpRatioAfterLevelUp_Odd.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::ExpRatioAfterLevelUp_Odd.FieldName;
      if (this->ExpRatioAfterLevelUp_Odd != 0.0) {
        this->ExpRatioAfterLevelUp_Odd = 0.0;
        local_50 = iVar3;
        local_58 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
      }
      iVar3 = FFieldNotificationClassDescriptor::ExpRatioAfterLevelUp_Even.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::ExpRatioAfterLevelUp_Even.FieldName;
      if (this->ExpRatioAfterLevelUp_Even == 0.0) goto LAB_14bfd48cc;
      this->ExpRatioAfterLevelUp_Even = 0.0;
      pFVar5 = &local_68;
      local_68 = FVar2;
      local_60 = iVar3;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar5);
  }
LAB_14bfd48cc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Reset @ 14bfd53b0

void __thiscall UDS_VM_W_Common_LevelGauge::Reset(UDS_VM_W_Common_LevelGauge *this)

{
  FName local_28;
  int local_20;
  
  local_20 = FFieldNotificationClassDescriptor::Level.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::Level.FieldName;
  if (this->Level != 1) {
    this->Level = 1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::AddLevel.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::AddLevel.FieldName;
  if (this->AddLevel != 0) {
    this->AddLevel = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::LimitLevel.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::LimitLevel.FieldName;
  if (this->LimitLevel != 1) {
    this->LimitLevel = 1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::Exp.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::Exp.FieldName;
  if (this->Exp != 0) {
    this->Exp = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::AddExp.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::AddExp.FieldName;
  if (this->AddExp != 0) {
    this->AddExp = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::MaxExp.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::MaxExp.FieldName;
  if (this->MaxExp != 0) {
    this->MaxExp = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_28 = FFieldNotificationClassDescriptor::ExpRatio.FieldName;
  if (this->ExpRatio != 0.0) {
    local_20 = FFieldNotificationClassDescriptor::ExpRatio.BitNumber;
    this->ExpRatio = 0.0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_28 = FFieldNotificationClassDescriptor::ExpRatioPercent.FieldName;
  if (this->ExpRatioPercent != 0.0) {
    local_20 = FFieldNotificationClassDescriptor::ExpRatioPercent.BitNumber;
    this->ExpRatioPercent = 0.0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_28 = FFieldNotificationClassDescriptor::ExpRatioBeforeLevelUp.FieldName;
  if (this->ExpRatioBeforeLevelUp != 0.0) {
    local_20 = FFieldNotificationClassDescriptor::ExpRatioBeforeLevelUp.BitNumber;
    this->ExpRatioBeforeLevelUp = 0.0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_28 = FFieldNotificationClassDescriptor::ExpRatioAfterLevelUp_Odd.FieldName;
  if (this->ExpRatioAfterLevelUp_Odd != 0.0) {
    local_20 = FFieldNotificationClassDescriptor::ExpRatioAfterLevelUp_Odd.BitNumber;
    this->ExpRatioAfterLevelUp_Odd = 0.0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_28 = FFieldNotificationClassDescriptor::ExpRatioAfterLevelUp_Even.FieldName;
  if (this->ExpRatioAfterLevelUp_Even != 0.0) {
    local_20 = FFieldNotificationClassDescriptor::ExpRatioAfterLevelUp_Even.BitNumber;
    this->ExpRatioAfterLevelUp_Even = 0.0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::ExpSwitcherIndex.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::ExpSwitcherIndex.FieldName;
  if (this->ExpSwitcherIndex != 0) {
    this->ExpSwitcherIndex = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::IsLevelUp.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::IsLevelUp.FieldName;
  if (this->IsLevelUp != false) {
    this->IsLevelUp = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::IsMaxLevel.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::IsMaxLevel.FieldName;
  if (this->IsMaxLevel != false) {
    this->IsMaxLevel = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

