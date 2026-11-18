// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b5fda10

UClass * __cdecl UDS_VM_BreachExpectedReward::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_BreachExpectedReward.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_BreachExpectedReward",
               &Z_Registration_Info_UClass_UDS_VM_BreachExpectedReward.InnerSingleton,
               StaticRegisterNativesUDS_VM_BreachExpectedReward,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_BreachExpectedReward>,
               InternalVTableHelperCtorCaller<UDS_VM_BreachExpectedReward>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_BreachExpectedReward.InnerSingleton;
}

// UDS_VM_BreachExpectedReward @ 14b6005f0

UDS_VM_BreachExpectedReward * __thiscall
UDS_VM_BreachExpectedReward::UDS_VM_BreachExpectedReward
          (UDS_VM_BreachExpectedReward *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_BreachExpectedReward__6B_;
  (this->ExpectedRewardsEntry).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExpectedRewardsEntry).UserObjectList.ArrayNum = 0;
  (this->ExpectedRewardsEntry).UserObjectList.ArrayMax = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->FixedText_ActionPoint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_ActionPoint).StringEnumTableNameID.Number = 0;
  (this->FixedText_ActionPoint).DateTime.Ticks = 0;
  (this->FixedText_ActionPoint).TimeSpan.Ticks = 0;
  (this->FixedText_ActionPoint).TimeExpressionType = None;
  (this->FixedText_ActionPoint).IsExpression = false;
  (this->FixedText_ActionPoint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_ActionPoint).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_ActionPoint).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_ActionPoint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_ActionPoint).FormatArgs.ArrayNum = 0;
  (this->FixedText_ActionPoint).FormatArgs.ArrayMax = 0;
  (this->FixedText_NoItemRewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NoItemRewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_NoItemRewards).DateTime.Ticks = 0;
  (this->FixedText_NoItemRewards).TimeSpan.Ticks = 0;
  (this->FixedText_NoItemRewards).TimeExpressionType = None;
  (this->FixedText_NoItemRewards).IsExpression = false;
  (this->FixedText_NoItemRewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NoItemRewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NoItemRewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NoItemRewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_NoItemRewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_NoItemRewards).FormatArgs.ArrayMax = 0;
  this->BreachRewardID = 0;
  this->RewardGrade = 0;
  (this->FirstPlayerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FirstPlayerName).Data.ArrayNum = 0;
  (this->FirstPlayerName).Data.ArrayMax = 0;
  (this->FixedText_ActionPoint).StringTableType = StringUi;
  (this->FixedText_ActionPoint).StringTableID = 0x2b0a;
  (this->FixedText_NoItemRewards).StringTableType = StringUi;
  (this->FixedText_NoItemRewards).StringTableID = 0xeb33;
  return this;
}

// UDS_VM_BreachExpectedReward @ 14b600740

UDS_VM_BreachExpectedReward * __thiscall
UDS_VM_BreachExpectedReward::UDS_VM_BreachExpectedReward
          (UDS_VM_BreachExpectedReward *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_BreachExpectedReward__6B_;
  (this->ExpectedRewardsEntry).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExpectedRewardsEntry).UserObjectList.ArrayNum = 0;
  (this->ExpectedRewardsEntry).UserObjectList.ArrayMax = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->FixedText_ActionPoint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_ActionPoint).StringEnumTableNameID.Number = 0;
  (this->FixedText_ActionPoint).DateTime.Ticks = 0;
  (this->FixedText_ActionPoint).TimeSpan.Ticks = 0;
  (this->FixedText_ActionPoint).TimeExpressionType = None;
  (this->FixedText_ActionPoint).IsExpression = false;
  (this->FixedText_ActionPoint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_ActionPoint).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_ActionPoint).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_ActionPoint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_ActionPoint).FormatArgs.ArrayNum = 0;
  (this->FixedText_ActionPoint).FormatArgs.ArrayMax = 0;
  (this->FixedText_NoItemRewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NoItemRewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_NoItemRewards).DateTime.Ticks = 0;
  (this->FixedText_NoItemRewards).TimeSpan.Ticks = 0;
  (this->FixedText_NoItemRewards).TimeExpressionType = None;
  (this->FixedText_NoItemRewards).IsExpression = false;
  (this->FixedText_NoItemRewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NoItemRewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NoItemRewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NoItemRewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_NoItemRewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_NoItemRewards).FormatArgs.ArrayMax = 0;
  this->BreachRewardID = 0;
  this->RewardGrade = 0;
  (this->FirstPlayerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FirstPlayerName).Data.ArrayNum = 0;
  (this->FirstPlayerName).Data.ArrayMax = 0;
  (this->FixedText_ActionPoint).StringTableType = StringUi;
  (this->FixedText_ActionPoint).StringTableID = 0x2b0a;
  (this->FixedText_NoItemRewards).StringTableType = StringUi;
  (this->FixedText_NoItemRewards).StringTableID = 0xeb33;
  return this;
}

// ~UDS_VM_BreachExpectedReward @ 14b601cc0

void __thiscall
UDS_VM_BreachExpectedReward::~UDS_VM_BreachExpectedReward(UDS_VM_BreachExpectedReward *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_BreachExpectedReward__6B_;
  pFVar1 = (this->FirstPlayerName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_NoItemRewards).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_NoItemRewards).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_NoItemRewards).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_NoItemRewards).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_ActionPoint).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_ActionPoint).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_ActionPoint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_ActionPoint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExpectedRewardsEntry).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b603b50

IClassDescriptor * __thiscall
UDS_VM_BreachExpectedReward::GetFieldNotificationDescriptor(UDS_VM_BreachExpectedReward *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_BreachExpectedReward::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6042e0

UClass * __cdecl UDS_VM_BreachExpectedReward::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_BreachExpectedReward.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_BreachExpectedReward",
               &Z_Registration_Info_UClass_UDS_VM_BreachExpectedReward.InnerSingleton,
               StaticRegisterNativesUDS_VM_BreachExpectedReward,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_BreachExpectedReward>,
               InternalVTableHelperCtorCaller<UDS_VM_BreachExpectedReward>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_BreachExpectedReward.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_BreachExpectedReward @ 14b604950

void __cdecl UDS_VM_BreachExpectedReward::StaticRegisterNativesUDS_VM_BreachExpectedReward(void)

{
  return;
}

// BindModel @ 14bd46a70

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_BreachExpectedReward::BindModel(UDS_VM_BreachExpectedReward *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// OnSetViewModel @ 14bd7e890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_BreachExpectedReward::OnSetViewModel
          (UDS_VM_BreachExpectedReward *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  FDS_BreachRewardTableRow *pFVar7;
  FName *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStackY_208 [32];
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
  TSharedPtr<FDS_ViewModelContext_BreachExpectedReward,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  SafeCast<FDS_ViewModelContext_BreachExpectedReward>(&local_188,&local_178);
  if (local_188.Object == (FDS_ViewModelContext_BreachExpectedReward *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_BreachExpectedReward::OnSetViewModel",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x20,L"context is nullptr");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    goto LAB_14bd7ebbc;
  }
  this->BreachRewardID = (local_188.Object)->BreachRewardID;
  this->RewardGrade = (local_188.Object)->RewardGrade;
  iVar1 = ((local_188.Object)->FirstPlayerName).Data.ArrayNum;
  iVar10 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar10 = 0;
  }
  ::FString::AssignRange
            (&this->FirstPlayerName,
             (wchar_t *)((local_188.Object)->FirstPlayerName).Data.AllocatorInstance.Data,iVar10);
  pFVar7 = FDS_BreachRewardTableRow::GetRef((longlong)this->BreachRewardID,true);
  uVar11 = this->RewardGrade - 1;
  if (((int)uVar11 < 0) || ((pFVar7->RepeatPlaySection).ArrayNum <= (int)uVar11)) {
LAB_14bd7eae8:
    FDS_Text::SetTextFromStringTable(&this->TitleText,StringUi,0x5cc66);
    local_1b0 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::TitleText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    if (this->RewardObtainedVisibility != Collapsed) {
      local_1a8 = FFieldNotificationClassDescriptor::RewardObtainedVisibility.FieldName;
      pFVar8 = &local_1a8;
      local_1a0 = FFieldNotificationClassDescriptor::RewardObtainedVisibility.BitNumber;
LAB_14bd7eb48:
      this->RewardObtainedVisibility = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar8);
    }
  }
  else {
    uVar9 = 0;
    if ((int)uVar11 < (pFVar7->RepeatPlaySection).ArrayNum) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)((pFVar7->RepeatPlaySection).AllocatorInstance.Data + (longlong)(int)uVar11 * 4) !=
        1) goto LAB_14bd7eae8;
    FDS_Text::SetTextFromStringTable(&this->TitleText,StringUi,0x5cc64);
    local_1d0 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
    local_1d8 = FFieldNotificationClassDescriptor::TitleText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
    if (this->RewardObtainedVisibility != Collapsed) {
      local_1c8 = FFieldNotificationClassDescriptor::RewardObtainedVisibility.FieldName;
      pFVar8 = &local_1c8;
      local_1c0 = FFieldNotificationClassDescriptor::RewardObtainedVisibility.BitNumber;
      goto LAB_14bd7eb48;
    }
  }
  iVar10 = FFieldNotificationClassDescriptor::ActionInfoVisibility.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::ActionInfoVisibility.FieldName;
  if (this->ActionInfoVisibility != Collapsed) {
    this->ActionInfoVisibility = Collapsed;
    local_190 = iVar10;
    local_198 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
  }
  SetExpectedRewards(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
LAB_14bd7ebbc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetActionInfoVisibility @ 14bd86d20

void __thiscall
UDS_VM_BreachExpectedReward::SetActionInfoVisibility
          (UDS_VM_BreachExpectedReward *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ActionInfoVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ActionInfoVisibility.FieldName;
  if (this->ActionInfoVisibility != *param_1) {
    this->ActionInfoVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetExpectedRewards @ 14bd88350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_VM_BreachExpectedReward::SetExpectedRewards(UDS_VM_BreachExpectedReward *this)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  UDS_UserObjectListItem *this_00;
  undefined8 *puVar5;
  byte bVar6;
  longlong lVar7;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  undefined8 local_130;
  UDS_M_ItemImplBase *local_128;
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  int local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  UDS_UserObjectListItem *local_f0;
  FName local_e8;
  int local_e0;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  FDS_BreachRewardTableRow::GetRef((longlong)this->BreachRewardID,true);
  TVar8._4_4_ = 0;
  TVar8._0_4_ = this->BreachRewardID;
  FDS_BreachRewardTableRow::GetRewardItemMap
            ((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)local_88,
             this->BreachRewardID,this->RewardGrade + -1);
  FDS_EntryBindingEventField::Reset(&this->ExpectedRewardsEntry);
  uVar11 = local_60;
  iStack_118 = 0;
  local_100 = 0;
  uStack_114 = 1;
  uStack_104 = 0;
  if (local_60 != 0) {
    puVar12 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar12 = local_68;
    }
    TVar8.DebugPtr = (UDS_UserObjectListItem *)0x0;
    uVar10 = *puVar12;
    while (uVar10 == 0) {
      lVar7 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      uStack_104 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_118)
      goto LAB_14bd88433;
      uVar10 = puVar12[lVar7 + 1];
    }
    uStack_114 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uStack_114 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uStack_104 = local_100 + -1 + (int)lVar7;
    local_130 = CONCAT44(local_130._4_4_,(int)lVar7);
    if ((int)local_60 < (int)uStack_104) {
      uStack_104 = local_60;
    }
  }
LAB_14bd88433:
  local_120 = (longlong *)local_88;
  local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar10 = local_60 & 0xffffffe0;
  iStack_f8 = local_88._8_4_ - local_54;
  uStack_108 = 0xffffffff;
  TStack_d0.CurrentBitIndex = uStack_104;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_114,iStack_118);
  iVar9 = (int)local_60 >> 5;
  TStack_d0._28_4_ = uStack_104;
  TStack_d0.BaseBitIndex = local_100;
  uStack_b0 = CONCAT44(uStack_f4,iStack_f8);
  bVar6 = (byte)local_60;
  uStack_fc = uStack_104;
  local_d8 = local_120;
  TStack_d0.Array = local_110;
  if ((int)local_60 < 0) {
    TVar8.DebugPtr = (UDS_UserObjectListItem *)&::s_C__Workspace_UnrealEngine_Engin;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (uVar11 != local_60) {
    puVar12 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar12 = local_68;
    }
    TVar8.DebugPtr = (UDS_UserObjectListItem *)0x0;
    uVar11 = -1 << (bVar6 & 0x1f) & puVar12[iVar9];
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14bd8853c;
      uVar11 = puVar12[lVar7 + 1];
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar11 = (int)lVar7 + -1 + uVar10;
    if ((int)local_60 < (int)uVar11) {
      uVar11 = local_60;
    }
  }
LAB_14bd8853c:
  while( true ) {
    plVar3 = local_d8;
    if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (((TStack_d0.CurrentBitIndex == uVar11) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar3 == (longlong *)local_88)) break;
    local_130 = *(undefined8 *)(*plVar3 + (longlong)TStack_d0.CurrentBitIndex * 0x10);
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    TVar8._0_1_ = 6;
    DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_128,TVar8._0_4_);
    if (local_128 != (UDS_M_ItemImplBase *)0x0) {
      UDS_M_ItemImplBase::SetQuantity(local_128,local_130._4_4_);
      puVar5 = (undefined8 *)(**(code **)(local_128->_padding_ + 0x310))(local_128,local_98);
      local_a8.Object = (FDS_ViewModelContext *)*puVar5;
      local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar5[1];
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(this_00,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      local_f0 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      TVar8.DebugPtr = (UDS_UserObjectListItem *)&local_f0;
      FDS_EntryBindingEventField::Add
                (&this->ExpectedRewardsEntry,
                 (TObjectPtr<UDS_UserObjectListItem>)TVar8.ObjectPtr.field0_0x0);
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  local_e0 = FFieldNotificationClassDescriptor::ExpectedRewardsEntry.BitNumber;
  local_e8 = FFieldNotificationClassDescriptor::ExpectedRewardsEntry.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// SetRewardObtainedVisibility @ 14bd8a690

void __thiscall
UDS_VM_BreachExpectedReward::SetRewardObtainedVisibility
          (UDS_VM_BreachExpectedReward *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::RewardObtainedVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RewardObtainedVisibility.FieldName;
  if (this->RewardObtainedVisibility != *param_1) {
    this->RewardObtainedVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bd8bb40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_BreachExpectedReward::UnbindModel(UDS_VM_BreachExpectedReward *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

