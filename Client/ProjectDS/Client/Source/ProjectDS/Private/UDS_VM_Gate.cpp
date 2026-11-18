// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetEntranceButtonClickEvent_WrapperImpl @ 14b64dc90

void __cdecl UDS_VM_Gate::SetEntranceButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_PhasingManager *this;
  
  this = UDS_PhasingManager::GetInst();
  if (this != (UDS_PhasingManager *)0x0) {
    UDS_PhasingManager::EnterBreach
              (this,(ulong64 *)((longlong)param_1 + 0x1d0),*(int *)((longlong)param_1 + 0x218));
    return;
  }
  return;
}

// StaticClass @ 14b64dca0

UClass * __cdecl UDS_VM_Gate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Gate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Gate",
               &Z_Registration_Info_UClass_UDS_VM_Gate.InnerSingleton,
               StaticRegisterNativesUDS_VM_Gate,0x220,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Gate>,InternalVTableHelperCtorCaller<UDS_VM_Gate>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Gate.InnerSingleton;
}

// UDS_VM_Gate @ 14b651920

UDS_VM_Gate * __thiscall UDS_VM_Gate::UDS_VM_Gate(UDS_VM_Gate *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->GateNameText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->GateNameText).StringTableID = 0;
  this->_padding_ = (longlong)&___7UDS_VM_Gate__6B_;
  (this->GateNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->GateNameText).StringEnumTableNameID.Number = 0;
  (this->GateNameText).DateTime.Ticks = 0;
  (this->GateNameText).TimeSpan.Ticks = 0;
  (this->GateNameText).TimeExpressionType = None;
  (this->GateNameText).IsExpression = false;
  (this->GateNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GateNameText).UniqueString.Data.ArrayNum = 0;
  (this->GateNameText).UniqueString.Data.ArrayMax = 0;
  (this->GateNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GateNameText).FormatArgs.ArrayNum = 0;
  (this->GateNameText).FormatArgs.ArrayMax = 0;
  (this->GateTypeText).StringTableType = None;
  (this->GateTypeText).StringTableID = 0;
  (this->GateTypeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->GateTypeText).StringEnumTableNameID.Number = 0;
  (this->GateTypeText).DateTime.Ticks = 0;
  (this->GateTypeText).TimeSpan.Ticks = 0;
  (this->GateTypeText).TimeExpressionType = None;
  (this->GateTypeText).IsExpression = false;
  (this->GateTypeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GateTypeText).UniqueString.Data.ArrayNum = 0;
  (this->GateTypeText).UniqueString.Data.ArrayMax = 0;
  (this->GateTypeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GateTypeText).FormatArgs.ArrayNum = 0;
  (this->GateTypeText).FormatArgs.ArrayMax = 0;
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
  (this->GateDetailInfo).StuffPortalEntityID = 0;
  (this->GateDetailInfo).RewardGrade = 0;
  ::FString::FString(&(this->GateDetailInfo).FirstPlayerName,"");
  (this->GateDetailInfo).FinderEntityID = 0;
  (this->GateDetailInfo).CurrentTryCount = 0;
  (this->GateDetailInfo).MaxTryCount = 0;
  (this->GateDetailInfo).LifeEndTime = 0.0;
  (this->GateDetailInfo).BreachBaseID = 0;
  (this->GateDetailInfo).NeedTicketType = None;
  (this->GateDetailInfo).NeedTicketValue = 0;
  return this;
}

// UDS_VM_Gate @ 14b651ad0

UDS_VM_Gate * __thiscall UDS_VM_Gate::UDS_VM_Gate(UDS_VM_Gate *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->GateNameText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->GateNameText).StringTableID = 0;
  this->_padding_ = (longlong)&___7UDS_VM_Gate__6B_;
  (this->GateNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->GateNameText).StringEnumTableNameID.Number = 0;
  (this->GateNameText).DateTime.Ticks = 0;
  (this->GateNameText).TimeSpan.Ticks = 0;
  (this->GateNameText).TimeExpressionType = None;
  (this->GateNameText).IsExpression = false;
  (this->GateNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GateNameText).UniqueString.Data.ArrayNum = 0;
  (this->GateNameText).UniqueString.Data.ArrayMax = 0;
  (this->GateNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GateNameText).FormatArgs.ArrayNum = 0;
  (this->GateNameText).FormatArgs.ArrayMax = 0;
  (this->GateTypeText).StringTableType = None;
  (this->GateTypeText).StringTableID = 0;
  (this->GateTypeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->GateTypeText).StringEnumTableNameID.Number = 0;
  (this->GateTypeText).DateTime.Ticks = 0;
  (this->GateTypeText).TimeSpan.Ticks = 0;
  (this->GateTypeText).TimeExpressionType = None;
  (this->GateTypeText).IsExpression = false;
  (this->GateTypeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GateTypeText).UniqueString.Data.ArrayNum = 0;
  (this->GateTypeText).UniqueString.Data.ArrayMax = 0;
  (this->GateTypeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GateTypeText).FormatArgs.ArrayNum = 0;
  (this->GateTypeText).FormatArgs.ArrayMax = 0;
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
  (this->GateDetailInfo).StuffPortalEntityID = 0;
  (this->GateDetailInfo).RewardGrade = 0;
  ::FString::FString(&(this->GateDetailInfo).FirstPlayerName,"");
  (this->GateDetailInfo).FinderEntityID = 0;
  (this->GateDetailInfo).CurrentTryCount = 0;
  (this->GateDetailInfo).MaxTryCount = 0;
  (this->GateDetailInfo).LifeEndTime = 0.0;
  (this->GateDetailInfo).BreachBaseID = 0;
  (this->GateDetailInfo).NeedTicketType = None;
  (this->GateDetailInfo).NeedTicketValue = 0;
  return this;
}

// ~UDS_VM_Gate @ 14b6549c0

void __thiscall UDS_VM_Gate::~UDS_VM_Gate(UDS_VM_Gate *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Gate__6B_;
  pFVar1 = (this->GateDetailInfo).FirstPlayerName.Data.AllocatorInstance.Data;
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
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->GateTypeText).FormatArgs.AllocatorInstance.Data,
             (this->GateTypeText).FormatArgs.ArrayNum);
  pFVar1 = (this->GateTypeText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GateTypeText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->GateNameText).FormatArgs.AllocatorInstance.Data,
             (this->GateNameText).FormatArgs.ArrayNum);
  pFVar1 = (this->GateNameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GateNameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b657120

IClassDescriptor * __thiscall UDS_VM_Gate::GetFieldNotificationDescriptor(UDS_VM_Gate *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Gate::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b657850

UClass * __cdecl UDS_VM_Gate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Gate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Gate",
               &Z_Registration_Info_UClass_UDS_VM_Gate.InnerSingleton,
               StaticRegisterNativesUDS_VM_Gate,0x220,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Gate>,InternalVTableHelperCtorCaller<UDS_VM_Gate>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Gate.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Gate @ 14b658260

void __cdecl UDS_VM_Gate::StaticRegisterNativesUDS_VM_Gate(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Gate_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b659090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_Gate::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDS_VM_Gate__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)
     ((longlong)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController + 4) = 0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2].ViewModelContext.Object = 0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    ::FString::FString((FString *)(this + 3),"");
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined1 *)((longlong)&this[3]._padding_ + 4) = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execIsEnableEntranceButton @ 14b659950

void __cdecl UDS_VM_Gate::execIsEnableEntranceButton(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsEnableEntranceButton((UDS_VM_Gate *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// BindModel @ 14bd48970

void __thiscall UDS_VM_Gate::BindModel(UDS_VM_Gate *this)

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
    ::AddUObject<UDS_VM_Gate>
              (&pUVar2[0xc].field_0x18,(UDS_VM_Gate *)(local_res10 + 1),(pmf_8246c5da *)this);
  }
  return;
}

// InitViewModel @ 14bd69be0

void __thiscall UDS_VM_Gate::InitViewModel(UDS_VM_Gate *this)

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

// IsEnableEntranceButton @ 14bd6b710

bool __thiscall UDS_VM_Gate::IsEnableEntranceButton(UDS_VM_Gate *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  bVar1 = (bool)(this->GateDetailInfo).NeedTicketType;
  if (bVar1 != false) {
    UDS_TicketData::GetData((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,bVar1);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      if ((this->GateDetailInfo).NeedTicketValue <= *(int *)&pUVar2[2].field_0xc)
      goto LAB_14bd6b76f;
    }
    return false;
  }
LAB_14bd6b76f:
  bVar1 = FDS_BreachDetailInfo::IsOverLifeEndTime(&this->GateDetailInfo);
  return !bVar1;
}

// OnChangedGateDetailInfo @ 14bd702f0

void __thiscall
UDS_VM_Gate::OnChangedGateDetailInfo
          (UDS_VM_Gate *this,FDS_BreachDetailInfo *param_1,EDS_BreachInfoChangeType param_2)

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

// OnCloseInit @ 14bd76330

void __thiscall UDS_VM_Gate::OnCloseInit(UDS_VM_Gate *this)

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
  FDS_BreachDetailInfo::operator=(&this->GateDetailInfo,&local_58);
  if (local_58.FirstPlayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FirstPlayerName.Data.AllocatorInstance.Data);
  }
  return;
}

// OnEntranceButtonClickEvent @ 14bd76ce0

void __thiscall
UDS_VM_Gate::OnEntranceButtonClickEvent(UDS_VM_Gate *this,FDS_ButtonEventField *param_1)

{
  UDS_PhasingManager *this_00;
  
  this_00 = UDS_PhasingManager::GetInst();
  if (this_00 != (UDS_PhasingManager *)0x0) {
    UDS_PhasingManager::EnterBreach
              (this_00,&(this->GateDetailInfo).StuffPortalEntityID,this->InteractionID);
    return;
  }
  return;
}

// OnSetViewModel @ 14bd82380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Gate::OnSetViewModel(UDS_VM_Gate *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_BreachExpectedReward *pUVar2;
  UDS_VM_W_Common_Condition *this_00;
  UDS_VM_TicketDisplay *this_01;
  code *pcVar3;
  FDS_ViewModelContext_BreachExpectedReward *pFVar4;
  FDS_ViewModelContext_Condition *pFVar5;
  FDS_ViewModelContext_Ticket *pFVar6;
  bool bVar7;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  TTuple<FName,unsigned___int64> *pTVar10;
  TTuple<FName,int> *pTVar11;
  UDS_PlayerData *this_02;
  FDS_BreachDetailInfo *pFVar12;
  FDS_BreachBaseTableRow *pFVar13;
  long64 lVar14;
  UEnum *pUVar15;
  int iVar16;
  ulong64 uVar17;
  undefined1 auStackY_308 [32];
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_2d8;
  FWeakObjectPtr local_2c8;
  FWeakObjectPtr local_2c0;
  FString local_2b8;
  TSharedPtr<FDS_ViewModelContext_BreachExpectedReward,1> local_2a8;
  FString local_298;
  TSharedPtr<FDS_ViewModelContext_BreachExpectedReward,1> local_288;
  TSharedPtr<FDS_ViewModelContext_Condition,1> local_278;
  TSharedPtr<FDS_ViewModelContext_Ticket,1> local_268;
  FName local_258;
  FName local_250;
  undefined1 local_248 [72];
  TReferenceControllerBase<1> *local_200;
  TSharedPtr<FDS_ViewModelContext,1> local_1f8;
  TSharedPtr<FDS_ViewModelContext,1> local_1e8;
  TSharedPtr<FDS_ViewModelContext,1> local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  FDS_BreachDetailInfo local_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_248._64_8_ = param_1->Object;
  local_200 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_200 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_200->SharedReferenceCount = (atomic<int>)((int)local_200->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsOpen>
            (&local_2d8,(TSharedPtr<FDS_ViewModelContext,1> *)(local_248 + 0x40));
  if (local_2d8.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_Gate::OnSetViewModel",0x1b,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_168.Ptr,0x3a,L"contentsOpenContext IsValid() == false");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.SharedReferenceCount.ReferenceController);
  }
  else {
    if ((local_2d8.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = FWeakObjectPtr::IsValid(&((local_2d8.Object)->ContentArguments).WeakPtr);
    if (bVar7) {
      if ((local_2d8.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar9 = FWeakObjectPtr::Get(&((local_2d8.Object)->ContentArguments).WeakPtr);
      ::FName::FName(&local_258,"StuffPortalEntityID");
      pTVar10 = TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                        *)(pUVar9 + 9),local_258);
      uVar17 = 0;
      if (pTVar10 != (TTuple<FName,unsigned___int64> *)0x0) {
        uVar17 = *(ulong64 *)&pTVar10->field_0x8;
      }
      if ((local_2d8.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar9 = FWeakObjectPtr::Get(&((local_2d8.Object)->ContentArguments).WeakPtr);
      ::FName::FName(&local_250,"InteractionID");
      pTVar11 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                        *)(pUVar9 + 3),local_250);
      if (pTVar11 == (TTuple<FName,int> *)0x0) {
        iVar16 = 0;
      }
      else {
        iVar16 = *(int *)&pTVar11->field_0x8;
      }
      this->InteractionID = iVar16;
      if (uVar17 != 0) {
        UDS_PlayerData::GetMainPlayerData();
        bVar7 = FWeakObjectPtr::IsValid(&local_2c8);
        if (bVar7) {
          this_02 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_2c8);
          pFVar12 = UDS_PlayerData::GetBreachDetailInfo(this_02,&local_1b8,uVar17);
          FDS_BreachDetailInfo::operator=(&this->GateDetailInfo,pFVar12);
          if (local_1b8.FirstPlayerName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.FirstPlayerName.Data.AllocatorInstance.Data);
          }
          bVar7 = FDS_BreachDetailInfo::IsValidData(&this->GateDetailInfo);
          if ((bVar7) &&
             (pFVar13 = FDS_BreachBaseTableRow::Get
                                  ((longlong)(this->GateDetailInfo).BreachBaseID,true),
             pFVar13 != (FDS_BreachBaseTableRow *)0x0)) {
            lVar14 = (**(code **)(pFVar13->ID_Name)._padding_)();
            FDS_Text::SetTextFromStringTable(&this->GateNameText,StringBase,lVar14);
            local_248._24_4_ = FFieldNotificationClassDescriptor::GateNameText.BitNumber;
            local_248._16_4_ =
                 FFieldNotificationClassDescriptor::GateNameText.FieldName.ComparisonIndex.Value;
            local_248._20_4_ = FFieldNotificationClassDescriptor::GateNameText.FieldName.Number;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_248 + 0x10);
            pUVar15 = StaticEnum<enum_EDS_BreachType>();
            DS_Util::GetStringEnumTableKey((UEnum *)local_248,(int)pUVar15);
            FDS_Text::SetTextFromStringEnumTable(&this->GateTypeText,(FName *)local_248);
            local_248._40_4_ = FFieldNotificationClassDescriptor::GateTypeText.BitNumber;
            local_248._32_4_ =
                 FFieldNotificationClassDescriptor::GateTypeText.FieldName.ComparisonIndex.Value;
            local_248._36_4_ = FFieldNotificationClassDescriptor::GateTypeText.FieldName.Number;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_248 + 0x20);
            if ((this->VM_FirstReward).field0_0x0.DebugPtr != (UDS_VM_BreachExpectedReward *)0x0) {
              MakeContext<FDS_ViewModelContext_BreachExpectedReward>(&local_2a8);
              pFVar4 = local_2a8.Object;
              if (local_2a8.Object != (FDS_ViewModelContext_BreachExpectedReward *)0x0) {
                iVar16 = pFVar13->ID_RewardFirst;
                if ((local_2a8.Object == (FDS_ViewModelContext_BreachExpectedReward *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar4->BreachRewardID = iVar16;
                local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_2b8.Data.ArrayNum = 0;
                local_2b8.Data.ArrayMax = 0;
                ::FString::operator=(&pFVar4->FirstPlayerName,&local_2b8);
                if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                }
                pFVar4->RewardGrade = (this->GateDetailInfo).RewardGrade;
                pUVar2 = (this->VM_FirstReward).field0_0x0.DebugPtr;
                local_1f8.Object = (FDS_ViewModelContext *)local_2a8.Object;
                local_1f8.SharedReferenceCount.ReferenceController =
                     local_2a8.SharedReferenceCount.ReferenceController;
                if (local_2a8.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_2a8.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_1f8);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_2a8.SharedReferenceCount.ReferenceController);
            }
            if ((this->VM_ExpectedReward).field0_0x0.DebugPtr != (UDS_VM_BreachExpectedReward *)0x0)
            {
              MakeContext<FDS_ViewModelContext_BreachExpectedReward>(&local_288);
              pFVar4 = local_288.Object;
              if (local_288.Object != (FDS_ViewModelContext_BreachExpectedReward *)0x0) {
                iVar16 = pFVar13->ID_RewardRepeat;
                if ((local_288.Object == (FDS_ViewModelContext_BreachExpectedReward *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar4->BreachRewardID = iVar16;
                local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_298.Data.ArrayNum = 0;
                local_298.Data.ArrayMax = 0;
                ::FString::operator=(&pFVar4->FirstPlayerName,&local_298);
                if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_298.Data.AllocatorInstance.Data);
                }
                pFVar4->RewardGrade = (this->GateDetailInfo).RewardGrade;
                pUVar2 = (this->VM_ExpectedReward).field0_0x0.DebugPtr;
                local_1e8.Object = (FDS_ViewModelContext *)local_288.Object;
                local_1e8.SharedReferenceCount.ReferenceController =
                     local_288.SharedReferenceCount.ReferenceController;
                if (local_288.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_288.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_1e8);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_288.SharedReferenceCount.ReferenceController);
            }
            if ((this->VM_CommonCondition_RestrictionInfo).field0_0x0.DebugPtr !=
                (UDS_VM_W_Common_Condition *)0x0) {
              MakeContext<FDS_ViewModelContext_Condition>(&local_278);
              pFVar5 = local_278.Object;
              if (local_278.Object != (FDS_ViewModelContext_Condition *)0x0) {
                if ((local_278.Object == (FDS_ViewModelContext_Condition *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar5->StringUiId = 0x5cc67;
                pFVar5->LeftValue = (this->GateDetailInfo).CurrentTryCount;
                pFVar5->RightValue = (this->GateDetailInfo).MaxTryCount;
                this_00 = (this->VM_CommonCondition_RestrictionInfo).field0_0x0.DebugPtr;
                local_1d8.Object = (FDS_ViewModelContext *)local_278.Object;
                local_1d8.SharedReferenceCount.ReferenceController =
                     local_278.SharedReferenceCount.ReferenceController;
                if (local_278.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_278.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_1d8);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_278.SharedReferenceCount.ReferenceController);
            }
            if ((this->VM_TicketDisplay).field0_0x0.DebugPtr != (UDS_VM_TicketDisplay *)0x0) {
              UDS_TicketData::GetData
                        ((ulong64)&local_2c0,UDS_PlayerData::MainPlayerEntityID,
                         (bool)(this->GateDetailInfo).NeedTicketType);
              bVar7 = FWeakObjectPtr::IsValid(&local_2c0);
              if (bVar7) {
                MakeContext<FDS_ViewModelContext_Ticket>(&local_268);
                pFVar6 = local_268.Object;
                if (local_268.Object != (FDS_ViewModelContext_Ticket *)0x0) {
                  if ((local_268.Object == (FDS_ViewModelContext_Ticket *)0x0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  *(undefined4 *)&pFVar6->_padding_ = 99;
                  (pFVar6->TicketData).WeakPtr = local_2c0;
                  pFVar6->NeedTicket = (this->GateDetailInfo).NeedTicketValue;
                  this_01 = (this->VM_TicketDisplay).field0_0x0.DebugPtr;
                  local_1c8.Object = (FDS_ViewModelContext *)local_268.Object;
                  local_1c8.SharedReferenceCount.ReferenceController =
                       local_268.SharedReferenceCount.ReferenceController;
                  if (local_268.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_268.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_1c8);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_268.SharedReferenceCount.ReferenceController);
              }
            }
            FDS_Text::SetTextFromStringTable(&this->EntranceButtonText,StringUi,0x5cc68);
            local_248._56_4_ = FFieldNotificationClassDescriptor::EntranceButtonText.BitNumber;
            local_248._48_4_ =
                 FFieldNotificationClassDescriptor::EntranceButtonText.FieldName.ComparisonIndex.
                 Value;
            local_248._52_4_ =
                 FFieldNotificationClassDescriptor::EntranceButtonText.FieldName.Number;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_248 + 0x30);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2d8.SharedReferenceCount.ReferenceController);
            goto LAB_14bd82a3f;
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.SharedReferenceCount.ReferenceController);
  }
LAB_14bd82a3f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bd8c3f0

void __thiscall UDS_VM_Gate::UnbindModel(UDS_VM_Gate *this)

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

