// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetEntranceButtonClickEvent_WrapperImpl @ 14b5fd540

void __cdecl UDS_VM_Breach::SetEntranceButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_PhasingManager *this;
  
  this = UDS_PhasingManager::GetInst();
  if (this != (UDS_PhasingManager *)0x0) {
    UDS_PhasingManager::EnterBreach
              (this,(ulong64 *)((longlong)param_1 + 0x238),*(int *)((longlong)param_1 + 0x280));
    return;
  }
  return;
}

// StaticClass @ 14b5fd550

UClass * __cdecl UDS_VM_Breach::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Breach.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Breach",
               &Z_Registration_Info_UClass_UDS_VM_Breach.InnerSingleton,
               StaticRegisterNativesUDS_VM_Breach,0x288,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Breach>,InternalVTableHelperCtorCaller<UDS_VM_Breach>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Breach.InnerSingleton;
}

// UDS_VM_Breach @ 14b6001d0

UDS_VM_Breach * __thiscall UDS_VM_Breach::UDS_VM_Breach(UDS_VM_Breach *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->BreachNameText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Breach__6B_;
  (this->BreachNameText).StringTableID = 0;
  (this->BreachNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BreachNameText).StringEnumTableNameID.Number = 0;
  (this->BreachNameText).DateTime.Ticks = 0;
  (this->BreachNameText).TimeSpan.Ticks = 0;
  (this->BreachNameText).TimeExpressionType = None;
  (this->BreachNameText).IsExpression = false;
  (this->BreachNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreachNameText).UniqueString.Data.ArrayNum = 0;
  (this->BreachNameText).UniqueString.Data.ArrayMax = 0;
  (this->BreachNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreachNameText).FormatArgs.ArrayNum = 0;
  (this->BreachNameText).FormatArgs.ArrayMax = 0;
  (this->BreachTypeText).StringTableType = None;
  (this->BreachTypeText).StringTableID = 0;
  (this->BreachTypeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BreachTypeText).StringEnumTableNameID.Number = 0;
  (this->BreachTypeText).DateTime.Ticks = 0;
  (this->BreachTypeText).TimeSpan.Ticks = 0;
  (this->BreachTypeText).TimeExpressionType = None;
  (this->BreachTypeText).IsExpression = false;
  (this->BreachTypeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreachTypeText).UniqueString.Data.ArrayNum = 0;
  (this->BreachTypeText).UniqueString.Data.ArrayMax = 0;
  (this->BreachTypeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreachTypeText).FormatArgs.ArrayNum = 0;
  (this->BreachTypeText).FormatArgs.ArrayMax = 0;
  FText::FText(&this->FirstClearUserText);
  (this->VM_FirstReward).field0_0x0.DebugPtr = (UDS_VM_BreachExpectedReward *)0x0;
  (this->VM_ExpectedReward).field0_0x0.DebugPtr = (UDS_VM_BreachExpectedReward *)0x0;
  (this->VM_CommonCondition_RestrictionInfo).field0_0x0.DebugPtr = (UDS_VM_W_Common_Condition *)0x0;
  (this->VM_TicketDisplay).field0_0x0.DebugPtr = (UDS_VM_TicketDisplay *)0x0;
  (this->EntranceButtonText).StringTableType = None;
  (this->EntranceButtonText).StringTableID = 0;
  (this->EntranceButtonText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->EntranceButtonText).StringEnumTableNameID.Number = 0;
  (this->EntranceButtonText).DateTime.Ticks = 0;
  (this->EntranceButtonText).TimeSpan.Ticks = 0;
  (this->EntranceButtonText).TimeExpressionType = None;
  (this->EntranceButtonText).IsExpression = false;
  (this->EntranceButtonText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntranceButtonText).UniqueString.Data.ArrayNum = 0;
  (this->EntranceButtonText).UniqueString.Data.ArrayMax = 0;
  (this->EntranceButtonText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntranceButtonText).FormatArgs.ArrayNum = 0;
  (this->EntranceButtonText).FormatArgs.ArrayMax = 0;
  (this->EntranceButtonClickEvent)._padding_ = '\0';
  (this->EntranceButtonClickEvent).bIsCustomSelected = false;
  (this->EntranceButtonClickEvent).bIsLacked = false;
  (this->EntranceButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->EntranceButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->EntranceButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->EntranceButtonClickEvent).Delegate.field_0x10 = 0;
  (this->FixedText_SubTitle_FirstUser).StringTableType = StringUi;
  (this->FixedText_SubTitle_FirstUser).StringTableID = 0x5cc62;
  (this->FixedText_SubTitle_FirstUser).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SubTitle_FirstUser).StringEnumTableNameID.Number = 0;
  (this->FixedText_SubTitle_FirstUser).DateTime.Ticks = 0;
  (this->FixedText_SubTitle_FirstUser).TimeSpan.Ticks = 0;
  (this->FixedText_SubTitle_FirstUser).TimeExpressionType = None;
  (this->FixedText_SubTitle_FirstUser).IsExpression = false;
  (this->FixedText_SubTitle_FirstUser).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_FirstUser).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SubTitle_FirstUser).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SubTitle_FirstUser).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_FirstUser).FormatArgs.ArrayNum = 0;
  (this->FixedText_SubTitle_FirstUser).FormatArgs.ArrayMax = 0;
  (this->BreachDetailInfo).StuffPortalEntityID = 0;
  (this->BreachDetailInfo).RewardGrade = 0;
  ::FString::FString(&(this->BreachDetailInfo).FirstPlayerName,"");
  (this->BreachDetailInfo).FinderEntityID = 0;
  (this->BreachDetailInfo).CurrentTryCount = 0;
  (this->BreachDetailInfo).MaxTryCount = 0;
  (this->BreachDetailInfo).LifeEndTime = 0.0;
  (this->BreachDetailInfo).BreachBaseID = 0;
  (this->BreachDetailInfo).NeedTicketType = None;
  (this->BreachDetailInfo).NeedTicketValue = 0;
  return this;
}

// UDS_VM_Breach @ 14b6003e0

UDS_VM_Breach * __thiscall
UDS_VM_Breach::UDS_VM_Breach(UDS_VM_Breach *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->BreachNameText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Breach__6B_;
  (this->BreachNameText).StringTableID = 0;
  (this->BreachNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BreachNameText).StringEnumTableNameID.Number = 0;
  (this->BreachNameText).DateTime.Ticks = 0;
  (this->BreachNameText).TimeSpan.Ticks = 0;
  (this->BreachNameText).TimeExpressionType = None;
  (this->BreachNameText).IsExpression = false;
  (this->BreachNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreachNameText).UniqueString.Data.ArrayNum = 0;
  (this->BreachNameText).UniqueString.Data.ArrayMax = 0;
  (this->BreachNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreachNameText).FormatArgs.ArrayNum = 0;
  (this->BreachNameText).FormatArgs.ArrayMax = 0;
  (this->BreachTypeText).StringTableType = None;
  (this->BreachTypeText).StringTableID = 0;
  (this->BreachTypeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->BreachTypeText).StringEnumTableNameID.Number = 0;
  (this->BreachTypeText).DateTime.Ticks = 0;
  (this->BreachTypeText).TimeSpan.Ticks = 0;
  (this->BreachTypeText).TimeExpressionType = None;
  (this->BreachTypeText).IsExpression = false;
  (this->BreachTypeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreachTypeText).UniqueString.Data.ArrayNum = 0;
  (this->BreachTypeText).UniqueString.Data.ArrayMax = 0;
  (this->BreachTypeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreachTypeText).FormatArgs.ArrayNum = 0;
  (this->BreachTypeText).FormatArgs.ArrayMax = 0;
  FText::FText(&this->FirstClearUserText);
  (this->VM_FirstReward).field0_0x0.DebugPtr = (UDS_VM_BreachExpectedReward *)0x0;
  (this->VM_ExpectedReward).field0_0x0.DebugPtr = (UDS_VM_BreachExpectedReward *)0x0;
  (this->VM_CommonCondition_RestrictionInfo).field0_0x0.DebugPtr = (UDS_VM_W_Common_Condition *)0x0;
  (this->VM_TicketDisplay).field0_0x0.DebugPtr = (UDS_VM_TicketDisplay *)0x0;
  (this->EntranceButtonText).StringTableType = None;
  (this->EntranceButtonText).StringTableID = 0;
  (this->EntranceButtonText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->EntranceButtonText).StringEnumTableNameID.Number = 0;
  (this->EntranceButtonText).DateTime.Ticks = 0;
  (this->EntranceButtonText).TimeSpan.Ticks = 0;
  (this->EntranceButtonText).TimeExpressionType = None;
  (this->EntranceButtonText).IsExpression = false;
  (this->EntranceButtonText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntranceButtonText).UniqueString.Data.ArrayNum = 0;
  (this->EntranceButtonText).UniqueString.Data.ArrayMax = 0;
  (this->EntranceButtonText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntranceButtonText).FormatArgs.ArrayNum = 0;
  (this->EntranceButtonText).FormatArgs.ArrayMax = 0;
  (this->EntranceButtonClickEvent)._padding_ = '\0';
  (this->EntranceButtonClickEvent).bIsCustomSelected = false;
  (this->EntranceButtonClickEvent).bIsLacked = false;
  (this->EntranceButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->EntranceButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->EntranceButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->EntranceButtonClickEvent).Delegate.field_0x10 = 0;
  (this->FixedText_SubTitle_FirstUser).StringTableType = StringUi;
  (this->FixedText_SubTitle_FirstUser).StringTableID = 0x5cc62;
  (this->FixedText_SubTitle_FirstUser).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SubTitle_FirstUser).StringEnumTableNameID.Number = 0;
  (this->FixedText_SubTitle_FirstUser).DateTime.Ticks = 0;
  (this->FixedText_SubTitle_FirstUser).TimeSpan.Ticks = 0;
  (this->FixedText_SubTitle_FirstUser).TimeExpressionType = None;
  (this->FixedText_SubTitle_FirstUser).IsExpression = false;
  (this->FixedText_SubTitle_FirstUser).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_FirstUser).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SubTitle_FirstUser).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SubTitle_FirstUser).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_FirstUser).FormatArgs.ArrayNum = 0;
  (this->FixedText_SubTitle_FirstUser).FormatArgs.ArrayMax = 0;
  (this->BreachDetailInfo).StuffPortalEntityID = 0;
  (this->BreachDetailInfo).RewardGrade = 0;
  ::FString::FString(&(this->BreachDetailInfo).FirstPlayerName,"");
  (this->BreachDetailInfo).FinderEntityID = 0;
  (this->BreachDetailInfo).CurrentTryCount = 0;
  (this->BreachDetailInfo).MaxTryCount = 0;
  (this->BreachDetailInfo).LifeEndTime = 0.0;
  (this->BreachDetailInfo).BreachBaseID = 0;
  (this->BreachDetailInfo).NeedTicketType = None;
  (this->BreachDetailInfo).NeedTicketValue = 0;
  return this;
}

// ~UDS_VM_Breach @ 14b601b50

void __thiscall UDS_VM_Breach::~UDS_VM_Breach(UDS_VM_Breach *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Breach__6B_;
  pFVar1 = (this->BreachDetailInfo).FirstPlayerName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_SubTitle_FirstUser).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_SubTitle_FirstUser).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_SubTitle_FirstUser).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_SubTitle_FirstUser).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->EntranceButtonClickEvent).Delegate
            );
  pvVar2 = *(void **)&(this->EntranceButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EntranceButtonClickEvent).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->EntranceButtonText).FormatArgs.AllocatorInstance.Data,
             (this->EntranceButtonText).FormatArgs.ArrayNum);
  pFVar1 = (this->EntranceButtonText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntranceButtonText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->FirstClearUserText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->BreachTypeText).FormatArgs.AllocatorInstance.Data,
             (this->BreachTypeText).FormatArgs.ArrayNum);
  pFVar1 = (this->BreachTypeText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BreachTypeText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->BreachNameText).FormatArgs.AllocatorInstance.Data,
             (this->BreachNameText).FormatArgs.ArrayNum);
  pFVar1 = (this->BreachNameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BreachNameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b603ae0

IClassDescriptor * __thiscall UDS_VM_Breach::GetFieldNotificationDescriptor(UDS_VM_Breach *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Breach::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b604220

UClass * __cdecl UDS_VM_Breach::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Breach.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Breach",
               &Z_Registration_Info_UClass_UDS_VM_Breach.InnerSingleton,
               StaticRegisterNativesUDS_VM_Breach,0x288,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Breach>,InternalVTableHelperCtorCaller<UDS_VM_Breach>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Breach.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Breach @ 14b604910

void __cdecl UDS_VM_Breach::StaticRegisterNativesUDS_VM_Breach(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Breach_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsEnableEntranceButton @ 14b605ac0

void __cdecl
UDS_VM_Breach::execIsEnableEntranceButton(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsEnableEntranceButton((UDS_VM_Breach *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// BindModel @ 14bd469f0

void __thiscall UDS_VM_Breach::BindModel(UDS_VM_Breach *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateRegistration<void___cdecl(FDS_BreachDetailInfo_const_&,enum_EDS_BreachInfoChangeType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Breach>
              (&pUVar2[0xc].field_0x18,(UDS_VM_Breach *)(local_res10 + 1),(pmf_7dee47e0 *)this);
  }
  return;
}

// InitViewModel @ 14bd695a0

void __thiscall UDS_VM_Breach::InitViewModel(UDS_VM_Breach *this)

{
  UDS_VM_W_Common_Condition *pUVar1;
  UDS_VM_TicketDisplay *pUVar2;
  UDS_VM_BreachExpectedReward *pUVar3;
  
  if ((this->VM_CommonCondition_RestrictionInfo).field0_0x0.DebugPtr ==
      (UDS_VM_W_Common_Condition *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_Common_Condition>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_W_Common_Condition *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_CommonCondition_RestrictionInfo).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_TicketDisplay).field0_0x0.DebugPtr == (UDS_VM_TicketDisplay *)0x0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_TicketDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_VM_TicketDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->VM_TicketDisplay).field0_0x0.DebugPtr = pUVar2;
  }
  if ((this->VM_FirstReward).field0_0x0.DebugPtr == (UDS_VM_BreachExpectedReward *)0x0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_BreachExpectedReward>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_BreachExpectedReward *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_FirstReward).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->VM_ExpectedReward).field0_0x0.DebugPtr == (UDS_VM_BreachExpectedReward *)0x0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_BreachExpectedReward>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_BreachExpectedReward *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_ExpectedReward).field0_0x0.DebugPtr = pUVar3;
  }
  return;
}

// IsEnableEntranceButton @ 14bd6b680

bool __thiscall UDS_VM_Breach::IsEnableEntranceButton(UDS_VM_Breach *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  bVar1 = (bool)(this->BreachDetailInfo).NeedTicketType;
  if (bVar1 != false) {
    UDS_TicketData::GetData((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,bVar1);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      if ((this->BreachDetailInfo).NeedTicketValue <= *(int *)&pUVar2[2].field_0xc)
      goto LAB_14bd6b6df;
    }
    return false;
  }
LAB_14bd6b6df:
  bVar1 = FDS_BreachDetailInfo::IsOverLifeEndTime(&this->BreachDetailInfo);
  return !bVar1;
}

// OnChangedBreachDetailInfo @ 14bd6f290

void __thiscall
UDS_VM_Breach::OnChangedBreachDetailInfo
          (UDS_VM_Breach *this,FDS_BreachDetailInfo *param_1,EDS_BreachInfoChangeType param_2)

{
  UDS_ContentManager *this_00;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (param_2 == Removed) {
    this_00 = UDS_ContentManager::GetInst();
    if (this_00 != (UDS_ContentManager *)0x0) {
      UDS_ContentManager::CloseContent(this_00);
    }
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x5ccca,Alert_None_01,&local_28);
  }
  return;
}

// OnCloseInit @ 14bd762b0

void __thiscall UDS_VM_Breach::OnCloseInit(UDS_VM_Breach *this)

{
  FDS_BreachDetailInfo local_58;
  
  local_58.StuffPortalEntityID = 0;
  local_58.RewardGrade = 0;
  ::FString::FString(&local_58.FirstPlayerName,"");
  local_58.FinderEntityID = 0;
  local_58.LifeEndTime = 0.0;
  local_58.CurrentTryCount = 0;
  local_58.MaxTryCount = 0;
  local_58.BreachBaseID = 0;
  local_58.NeedTicketType = None;
  local_58.NeedTicketValue = 0;
  FDS_BreachDetailInfo::operator=(&this->BreachDetailInfo,&local_58);
  if (local_58.FirstPlayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FirstPlayerName.Data.AllocatorInstance.Data);
  }
  return;
}

// OnEntranceButtonClickEvent @ 14bd76ca0

void __thiscall
UDS_VM_Breach::OnEntranceButtonClickEvent(UDS_VM_Breach *this,FDS_ButtonEventField *param_1)

{
  UDS_PhasingManager *this_00;
  
  this_00 = UDS_PhasingManager::GetInst();
  if (this_00 != (UDS_PhasingManager *)0x0) {
    UDS_PhasingManager::EnterBreach
              (this_00,&(this->BreachDetailInfo).StuffPortalEntityID,this->InteractionID);
    return;
  }
  return;
}

// OnSetViewModel @ 14bd7e070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Breach::OnSetViewModel(UDS_VM_Breach *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_BreachExpectedReward *pUVar2;
  UDS_VM_W_Common_Condition *this_00;
  UDS_VM_TicketDisplay *this_01;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  FDS_ViewModelContext_BreachExpectedReward *pFVar6;
  FDS_ViewModelContext_Condition *pFVar7;
  FDS_ViewModelContext_Ticket *pFVar8;
  bool bVar9;
  int iVar10;
  UDS_LogManager *pUVar11;
  UObject *pUVar12;
  TTuple<FName,unsigned___int64> *pTVar13;
  TTuple<FName,int> *pTVar14;
  UDS_PlayerData *this_02;
  FDS_BreachDetailInfo *pFVar15;
  FDS_BreachBaseTableRow *pFVar16;
  long64 lVar17;
  UEnum *pUVar18;
  FDS_StringUiTableRow *pFVar19;
  FText *pFVar20;
  FName *pFVar21;
  int iVar22;
  ulong64 uVar23;
  undefined1 auStackY_368 [32];
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_338;
  int local_328;
  FWeakObjectPtr local_320;
  FWeakObjectPtr local_318 [2];
  TSharedPtr<FDS_ViewModelContext_BreachExpectedReward,1> local_308;
  FString local_2f8;
  TSharedPtr<FDS_ViewModelContext_BreachExpectedReward,1> local_2e8;
  TSharedPtr<FDS_ViewModelContext_Condition,1> local_2d8;
  TSharedPtr<FDS_ViewModelContext_Ticket,1> local_2c8;
  FName local_2b8;
  FName local_2b0;
  undefined1 local_2a8 [80];
  FName local_258;
  int local_250;
  FName local_248;
  int local_240;
  FName local_238;
  int local_230;
  TSharedPtr<FDS_ViewModelContext,1> local_228;
  FText local_218;
  FText local_208;
  TSharedPtr<FDS_ViewModelContext,1> local_1f8;
  TSharedPtr<FDS_ViewModelContext,1> local_1e8;
  TSharedPtr<FDS_ViewModelContext,1> local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  FDS_BreachDetailInfo local_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  pFVar21 = (FName *)(local_2a8 + 0x40);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_228.Object = param_1->Object;
  local_228.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_228.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_338,&local_228);
  if (local_338.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_Breach::OnSetViewModel",0x1d,Yes);
      UDS_LogManager::PrintLog
                (pUVar11,1,Warning,local_168.Ptr,0x40,L"contentsOpenContext IsValid() == false");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_338.SharedReferenceCount.ReferenceController);
  }
  else {
    if ((local_338.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = FWeakObjectPtr::IsValid(&((local_338.Object)->ContentArguments).WeakPtr);
    if (bVar9) {
      if ((local_338.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar12 = FWeakObjectPtr::Get(&((local_338.Object)->ContentArguments).WeakPtr);
      ::FName::FName(&local_2b8,"StuffPortalEntityID");
      pTVar13 = TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                        *)(pUVar12 + 9),local_2b8);
      uVar23 = 0;
      if (pTVar13 != (TTuple<FName,unsigned___int64> *)0x0) {
        uVar23 = *(ulong64 *)&pTVar13->field_0x8;
      }
      if ((local_338.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar12 = FWeakObjectPtr::Get(&((local_338.Object)->ContentArguments).WeakPtr);
      ::FName::FName(&local_2b0,"InteractionID");
      pTVar14 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                        *)(pUVar12 + 3),local_2b0);
      iVar10 = 0;
      if (pTVar14 != (TTuple<FName,int> *)0x0) {
        iVar10 = *(int *)&pTVar14->field_0x8;
      }
      this->InteractionID = iVar10;
      if (uVar23 != 0) {
        UDS_PlayerData::GetMainPlayerData();
        bVar9 = FWeakObjectPtr::IsValid(&local_320);
        if (bVar9) {
          this_02 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_320);
          pFVar15 = UDS_PlayerData::GetBreachDetailInfo(this_02,&local_1b8,uVar23);
          FDS_BreachDetailInfo::operator=(&this->BreachDetailInfo,pFVar15);
          if (local_1b8.FirstPlayerName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.FirstPlayerName.Data.AllocatorInstance.Data);
          }
          bVar9 = FDS_BreachDetailInfo::IsValidData(&this->BreachDetailInfo);
          if ((bVar9) &&
             (pFVar16 = FDS_BreachBaseTableRow::Get
                                  ((longlong)(this->BreachDetailInfo).BreachBaseID,true),
             pFVar16 != (FDS_BreachBaseTableRow *)0x0)) {
            lVar17 = (**(code **)(pFVar16->ID_Name)._padding_)();
            FDS_Text::SetTextFromStringTable(&this->BreachNameText,StringBase,lVar17);
            local_2a8._24_4_ = FFieldNotificationClassDescriptor::BreachNameText.BitNumber;
            local_2a8._16_4_ =
                 FFieldNotificationClassDescriptor::BreachNameText.FieldName.ComparisonIndex.Value;
            local_2a8._20_4_ = FFieldNotificationClassDescriptor::BreachNameText.FieldName.Number;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_2a8 + 0x10);
            pUVar18 = StaticEnum<enum_EDS_BreachType>();
            DS_Util::GetStringEnumTableKey((UEnum *)local_2a8,(int)pUVar18);
            FDS_Text::SetTextFromStringEnumTable(&this->BreachTypeText,(FName *)local_2a8);
            local_2a8._40_4_ = FFieldNotificationClassDescriptor::BreachTypeText.BitNumber;
            local_2a8._32_4_ =
                 FFieldNotificationClassDescriptor::BreachTypeText.FieldName.ComparisonIndex.Value;
            local_2a8._36_4_ = FFieldNotificationClassDescriptor::BreachTypeText.FieldName.Number;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_2a8 + 0x20);
            iVar10 = FFieldNotificationClassDescriptor::FirstClearUserIconVisibility.BitNumber;
            FVar4 = FFieldNotificationClassDescriptor::FirstClearUserIconVisibility.FieldName;
            if ((this->BreachDetailInfo).FirstPlayerName.Data.ArrayNum < 2) {
              if (this->FirstClearUserIconVisibility != Collapsed) {
                this->FirstClearUserIconVisibility = Collapsed;
                FVar5 = FFieldNotificationClassDescriptor::FirstClearUserIconVisibility.FieldName;
                local_2a8._56_4_ = iVar10;
                FFieldNotificationClassDescriptor::FirstClearUserIconVisibility.FieldName.
                ComparisonIndex = FVar4.ComparisonIndex.Value;
                FFieldNotificationClassDescriptor::FirstClearUserIconVisibility.FieldName.Number =
                     FVar4.Number;
                local_2a8._48_4_ =
                     FFieldNotificationClassDescriptor::FirstClearUserIconVisibility.FieldName.
                     ComparisonIndex.Value;
                local_2a8._52_4_ =
                     FFieldNotificationClassDescriptor::FirstClearUserIconVisibility.FieldName.
                     Number;
                FFieldNotificationClassDescriptor::FirstClearUserIconVisibility.FieldName = FVar5;
                (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_2a8 + 0x30);
              }
              pFVar19 = FDS_StringUiTableRow::GetRef(0x5cc63,true);
              pFVar20 = FText::FromString(&local_218,&pFVar19->Text);
              FText::operator=(&this->FirstClearUserText,pFVar20);
              if (local_218.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
              }
              local_2a8._64_4_ =
                   FFieldNotificationClassDescriptor::FirstClearUserText.FieldName.ComparisonIndex.
                   Value;
              local_2a8._68_4_ =
                   FFieldNotificationClassDescriptor::FirstClearUserText.FieldName.Number;
              local_2a8._72_4_ = FFieldNotificationClassDescriptor::FirstClearUserText.BitNumber;
            }
            else {
              if (this->FirstClearUserIconVisibility != SelfHitTestInvisible) {
                this->FirstClearUserIconVisibility = SelfHitTestInvisible;
                local_250 = iVar10;
                local_258 = FVar4;
                (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_258);
              }
              pFVar20 = FText::FromString(&local_208,&(this->BreachDetailInfo).FirstPlayerName);
              FText::operator=(&this->FirstClearUserText,pFVar20);
              if (local_208.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
              }
              pFVar21 = &local_248;
              local_248 = FFieldNotificationClassDescriptor::FirstClearUserText.FieldName;
              local_240 = FFieldNotificationClassDescriptor::FirstClearUserText.BitNumber;
            }
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar21);
            if ((this->VM_FirstReward).field0_0x0.DebugPtr != (UDS_VM_BreachExpectedReward *)0x0) {
              MakeContext<FDS_ViewModelContext_BreachExpectedReward>(&local_308);
              pFVar6 = local_308.Object;
              if (local_308.Object != (FDS_ViewModelContext_BreachExpectedReward *)0x0) {
                local_328 = pFVar16->ID_RewardFirst;
                if ((local_308.Object == (FDS_ViewModelContext_BreachExpectedReward *)0x0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar6->BreachRewardID = local_328;
                iVar10 = (this->BreachDetailInfo).FirstPlayerName.Data.ArrayNum;
                iVar22 = iVar10 + -1;
                if (iVar10 == 0) {
                  iVar22 = 0;
                }
                ::FString::AssignRange
                          (&pFVar6->FirstPlayerName,
                           (wchar_t *)
                           (this->BreachDetailInfo).FirstPlayerName.Data.AllocatorInstance.Data,
                           iVar22);
                pFVar6->RewardGrade = (this->BreachDetailInfo).RewardGrade;
                pUVar2 = (this->VM_FirstReward).field0_0x0.DebugPtr;
                local_1f8.Object = (FDS_ViewModelContext *)local_308.Object;
                local_1f8.SharedReferenceCount.ReferenceController =
                     local_308.SharedReferenceCount.ReferenceController;
                if (local_308.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_308.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_1f8);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_308.SharedReferenceCount.ReferenceController);
            }
            if ((this->VM_ExpectedReward).field0_0x0.DebugPtr != (UDS_VM_BreachExpectedReward *)0x0)
            {
              MakeContext<FDS_ViewModelContext_BreachExpectedReward>(&local_2e8);
              pFVar6 = local_2e8.Object;
              if (local_2e8.Object != (FDS_ViewModelContext_BreachExpectedReward *)0x0) {
                iVar10 = pFVar16->ID_RewardRepeat;
                if ((local_2e8.Object == (FDS_ViewModelContext_BreachExpectedReward *)0x0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar6->BreachRewardID = iVar10;
                local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_2f8.Data.ArrayNum = 0;
                local_2f8.Data.ArrayMax = 0;
                ::FString::operator=(&pFVar6->FirstPlayerName,&local_2f8);
                if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
                }
                pFVar6->RewardGrade = (this->BreachDetailInfo).RewardGrade;
                pUVar2 = (this->VM_ExpectedReward).field0_0x0.DebugPtr;
                local_1e8.Object = (FDS_ViewModelContext *)local_2e8.Object;
                local_1e8.SharedReferenceCount.ReferenceController =
                     local_2e8.SharedReferenceCount.ReferenceController;
                if (local_2e8.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_2e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_2e8.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_1e8);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_2e8.SharedReferenceCount.ReferenceController);
            }
            if ((this->VM_CommonCondition_RestrictionInfo).field0_0x0.DebugPtr !=
                (UDS_VM_W_Common_Condition *)0x0) {
              MakeContext<FDS_ViewModelContext_Condition>(&local_2d8);
              pFVar7 = local_2d8.Object;
              if (local_2d8.Object != (FDS_ViewModelContext_Condition *)0x0) {
                if ((local_2d8.Object == (FDS_ViewModelContext_Condition *)0x0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar7->StringUiId = 0x5cc67;
                pFVar7->LeftValue = (this->BreachDetailInfo).CurrentTryCount;
                pFVar7->RightValue = (this->BreachDetailInfo).MaxTryCount;
                this_00 = (this->VM_CommonCondition_RestrictionInfo).field0_0x0.DebugPtr;
                local_1d8.Object = (FDS_ViewModelContext *)local_2d8.Object;
                local_1d8.SharedReferenceCount.ReferenceController =
                     local_2d8.SharedReferenceCount.ReferenceController;
                if (local_2d8.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_2d8.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_1d8);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_2d8.SharedReferenceCount.ReferenceController);
            }
            if ((this->VM_TicketDisplay).field0_0x0.DebugPtr != (UDS_VM_TicketDisplay *)0x0) {
              UDS_TicketData::GetData
                        ((ulong64)local_318,UDS_PlayerData::MainPlayerEntityID,
                         (bool)(this->BreachDetailInfo).NeedTicketType);
              bVar9 = FWeakObjectPtr::IsValid(local_318);
              if (bVar9) {
                MakeContext<FDS_ViewModelContext_Ticket>(&local_2c8);
                pFVar8 = local_2c8.Object;
                if (local_2c8.Object != (FDS_ViewModelContext_Ticket *)0x0) {
                  if ((local_2c8.Object == (FDS_ViewModelContext_Ticket *)0x0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  *(undefined4 *)&pFVar8->_padding_ = 99;
                  (pFVar8->TicketData).WeakPtr = local_318[0];
                  pFVar8->NeedTicket = (this->BreachDetailInfo).NeedTicketValue;
                  this_01 = (this->VM_TicketDisplay).field0_0x0.DebugPtr;
                  local_1c8.Object = (FDS_ViewModelContext *)local_2c8.Object;
                  local_1c8.SharedReferenceCount.ReferenceController =
                       local_2c8.SharedReferenceCount.ReferenceController;
                  if (local_2c8.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_2c8.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_1c8);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_2c8.SharedReferenceCount.ReferenceController);
              }
            }
            FDS_Text::SetTextFromStringTable(&this->EntranceButtonText,StringUi,0x5cc68);
            local_230 = FFieldNotificationClassDescriptor::EntranceButtonText.BitNumber;
            local_238 = FFieldNotificationClassDescriptor::EntranceButtonText.FieldName;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_338.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetFirstClearUserIconVisibility @ 14bd88740

void __thiscall
UDS_VM_Breach::SetFirstClearUserIconVisibility(UDS_VM_Breach *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::FirstClearUserIconVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::FirstClearUserIconVisibility.FieldName;
  if (this->FirstClearUserIconVisibility != *param_1) {
    this->FirstClearUserIconVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bd8baf0

void __thiscall UDS_VM_Breach::UnbindModel(UDS_VM_Breach *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xc].field_0x18,this);
  }
  return;
}

