// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// SetClickJoinNowButton_WrapperImpl @ 14b65b050

void __cdecl UDS_VM_GuildListSlot::SetClickJoinNowButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_GuildManager *this;
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_GuildManager::GetInst();
    if (this != (UDS_GuildManager *)0x0) {
      UDS_GuildManager::SendJoinGuild(this,*(long64 *)((longlong)param_1 + 0x1f0));
    }
    iStack_10 = FFieldNotificationClassDescriptor::DisableJoinButton.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::DisableJoinButton.FieldName;
    if (*(char *)((longlong)param_1 + 0xa0) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
    }
  }
  return;
}

// SetClickJoinApplyButton_WrapperImpl @ 14b65b060

void __cdecl UDS_VM_GuildListSlot::SetClickJoinApplyButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_GuildManager *this;
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_GuildManager::GetInst();
    if (this != (UDS_GuildManager *)0x0) {
      UDS_GuildManager::SendJoinGuild(this,*(long64 *)((longlong)param_1 + 0x1f0));
    }
    iStack_10 = FFieldNotificationClassDescriptor::DisableJoinButton.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::DisableJoinButton.FieldName;
    if (*(char *)((longlong)param_1 + 0xa0) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
    }
  }
  return;
}

// StaticClass @ 14b65b070

UClass * __cdecl UDS_VM_GuildListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildListSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildListSlot,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildListSlot.InnerSingleton;
}

// UDS_VM_GuildListSlot @ 14b65e0d0

UDS_VM_GuildListSlot * __thiscall
UDS_VM_GuildListSlot::UDS_VM_GuildListSlot(UDS_VM_GuildListSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildListSlot__6B_;
  (this->FixedTxt_JoinApply).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinApply).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinApply).DateTime.Ticks = 0;
  (this->FixedTxt_JoinApply).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinApply).TimeExpressionType = None;
  (this->FixedTxt_JoinApply).IsExpression = false;
  (this->FixedTxt_JoinApply).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApply).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinApply).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinApply).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApply).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinApply).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinNow).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinNow).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinNow).DateTime.Ticks = 0;
  (this->FixedTxt_JoinNow).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinNow).TimeExpressionType = None;
  (this->FixedTxt_JoinNow).IsExpression = false;
  (this->FixedTxt_JoinNow).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_JoinNow).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinNow).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinNow).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinNow).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinNow).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_UnableJoin).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_UnableJoin).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_UnableJoin).DateTime.Ticks = 0;
  (this->FixedTxt_UnableJoin).TimeSpan.Ticks = 0;
  (this->FixedTxt_UnableJoin).TimeExpressionType = None;
  (this->FixedTxt_UnableJoin).IsExpression = false;
  (this->FixedTxt_UnableJoin).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_UnableJoin).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_UnableJoin).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_UnableJoin).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_UnableJoin).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_UnableJoin).FormatArgs.ArrayMax = 0;
  this->SlotStateWidgetIndex = 0;
  (this->ClickJoinNowButton)._padding_ = '\0';
  (this->ClickJoinNowButton).bIsCustomSelected = false;
  (this->ClickJoinNowButton).bIsLacked = false;
  (this->ClickJoinNowButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickJoinNowButton).Delegate = 0;
  *(undefined8 *)&(this->ClickJoinNowButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickJoinNowButton).Delegate.field_0x10 = 0;
  (this->ClickJoinApplyButton)._padding_ = '\0';
  (this->ClickJoinApplyButton).bIsCustomSelected = false;
  (this->ClickJoinApplyButton).bIsLacked = false;
  (this->ClickJoinApplyButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickJoinApplyButton).Delegate = 0;
  *(undefined8 *)&(this->ClickJoinApplyButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickJoinApplyButton).Delegate.field_0x10 = 0;
  (this->VM_GuildData).field0_0x0.DebugPtr = (UDS_VM_GuildData *)0x0;
  (this->VM_GuildMark).field0_0x0.DebugPtr = (UDS_VM_GuildMark *)0x0;
  this->GuildUID = 0;
  (this->FixedTxt_JoinApply).StringTableType = StringUi;
  (this->FixedTxt_JoinApply).StringTableID = 0x3a9b3;
  (this->FixedTxt_JoinNow).StringTableType = StringUi;
  (this->FixedTxt_JoinNow).StringTableID = 0x3a9b2;
  (this->FixedTxt_UnableJoin).StringTableType = StringUi;
  (this->FixedTxt_UnableJoin).StringTableID = 0x3aa04;
  return this;
}

// UDS_VM_GuildListSlot @ 14b65e250

UDS_VM_GuildListSlot * __thiscall
UDS_VM_GuildListSlot::UDS_VM_GuildListSlot(UDS_VM_GuildListSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildListSlot__6B_;
  (this->FixedTxt_JoinApply).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinApply).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinApply).DateTime.Ticks = 0;
  (this->FixedTxt_JoinApply).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinApply).TimeExpressionType = None;
  (this->FixedTxt_JoinApply).IsExpression = false;
  (this->FixedTxt_JoinApply).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApply).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinApply).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinApply).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApply).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinApply).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinNow).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinNow).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinNow).DateTime.Ticks = 0;
  (this->FixedTxt_JoinNow).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinNow).TimeExpressionType = None;
  (this->FixedTxt_JoinNow).IsExpression = false;
  (this->FixedTxt_JoinNow).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_JoinNow).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinNow).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinNow).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinNow).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinNow).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_UnableJoin).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_UnableJoin).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_UnableJoin).DateTime.Ticks = 0;
  (this->FixedTxt_UnableJoin).TimeSpan.Ticks = 0;
  (this->FixedTxt_UnableJoin).TimeExpressionType = None;
  (this->FixedTxt_UnableJoin).IsExpression = false;
  (this->FixedTxt_UnableJoin).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_UnableJoin).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_UnableJoin).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_UnableJoin).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_UnableJoin).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_UnableJoin).FormatArgs.ArrayMax = 0;
  this->SlotStateWidgetIndex = 0;
  (this->ClickJoinNowButton)._padding_ = '\0';
  (this->ClickJoinNowButton).bIsCustomSelected = false;
  (this->ClickJoinNowButton).bIsLacked = false;
  (this->ClickJoinNowButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickJoinNowButton).Delegate = 0;
  *(undefined8 *)&(this->ClickJoinNowButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickJoinNowButton).Delegate.field_0x10 = 0;
  (this->ClickJoinApplyButton)._padding_ = '\0';
  (this->ClickJoinApplyButton).bIsCustomSelected = false;
  (this->ClickJoinApplyButton).bIsLacked = false;
  (this->ClickJoinApplyButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickJoinApplyButton).Delegate = 0;
  *(undefined8 *)&(this->ClickJoinApplyButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickJoinApplyButton).Delegate.field_0x10 = 0;
  (this->VM_GuildData).field0_0x0.DebugPtr = (UDS_VM_GuildData *)0x0;
  (this->VM_GuildMark).field0_0x0.DebugPtr = (UDS_VM_GuildMark *)0x0;
  this->GuildUID = 0;
  (this->FixedTxt_JoinApply).StringTableType = StringUi;
  (this->FixedTxt_JoinApply).StringTableID = 0x3a9b3;
  (this->FixedTxt_JoinNow).StringTableType = StringUi;
  (this->FixedTxt_JoinNow).StringTableID = 0x3a9b2;
  (this->FixedTxt_UnableJoin).StringTableType = StringUi;
  (this->FixedTxt_UnableJoin).StringTableID = 0x3aa04;
  return this;
}

// ~UDS_VM_GuildListSlot @ 14b661830

void __thiscall UDS_VM_GuildListSlot::~UDS_VM_GuildListSlot(UDS_VM_GuildListSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildListSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickJoinApplyButton).Delegate);
  pvVar1 = *(void **)&(this->ClickJoinApplyButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickJoinApplyButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickJoinNowButton).Delegate);
  pvVar1 = *(void **)&(this->ClickJoinNowButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickJoinNowButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_UnableJoin).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_UnableJoin).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_UnableJoin).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_UnableJoin).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinNow).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinNow).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_JoinNow).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_JoinNow).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinApply).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinApply).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_JoinApply).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_JoinApply).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b664340

IClassDescriptor * __thiscall
UDS_VM_GuildListSlot::GetFieldNotificationDescriptor(UDS_VM_GuildListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b664960

UClass * __cdecl UDS_VM_GuildListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildListSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildListSlot,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildListSlot @ 14b6653e0

void __cdecl UDS_VM_GuildListSlot::StaticRegisterNativesUDS_VM_GuildListSlot(void)

{
  return;
}

// __VTableCtorCaller @ 14b666100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_GuildListSlot::__VTableCtorCaller(FVTableHelper *param_1)

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
    *(undefined4 *)&this[2]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_GuildListSlot__6B_;
    *(undefined1 *)&this[1]._padding_ = 2;
    this[1]._padding_ = 0x3a9b3;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 2;
    this[1]._padding_ = 0x3a9b2;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined4 *)&this[1].Visibility = 0;
    *(undefined1 *)&this[1].VMName.ComparisonIndex.Value = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x3aa04;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[2].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined4 *)&this[2].Visibility = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14be75d30

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildListSlot::BindModel(UDS_VM_GuildListSlot *this)

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

// InitViewModel @ 14be8cc50

void __thiscall UDS_VM_GuildListSlot::InitViewModel(UDS_VM_GuildListSlot *this)

{
  return;
}

// OnClickJoinApplyButton @ 14be95b80

void __thiscall
UDS_VM_GuildListSlot::OnClickJoinApplyButton
          (UDS_VM_GuildListSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_GuildManager *this_00;
  FName local_18;
  int local_10;
  
  if (param_1->bIsCustomDisabled != true) {
    this_00 = UDS_GuildManager::GetInst();
    if (this_00 != (UDS_GuildManager *)0x0) {
      UDS_GuildManager::SendJoinGuild(this_00,this->GuildUID);
    }
    local_10 = FFieldNotificationClassDescriptor::DisableJoinButton.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::DisableJoinButton.FieldName;
    if (this->DisableJoinButton != true) {
      this->DisableJoinButton = true;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnClickJoinNowButton @ 14be95e20

void __thiscall
UDS_VM_GuildListSlot::OnClickJoinNowButton(UDS_VM_GuildListSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_GuildManager *this_00;
  FName local_18;
  int local_10;
  
  if (param_1->bIsCustomDisabled != true) {
    this_00 = UDS_GuildManager::GetInst();
    if (this_00 != (UDS_GuildManager *)0x0) {
      UDS_GuildManager::SendJoinGuild(this_00,this->GuildUID);
    }
    local_10 = FFieldNotificationClassDescriptor::DisableJoinButton.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::DisableJoinButton.FieldName;
    if (this->DisableJoinButton != true) {
      this->DisableJoinButton = true;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnSetViewModel @ 14be9f590

void __thiscall
UDS_VM_GuildListSlot::OnSetViewModel
          (UDS_VM_GuildListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  FDS_ViewModelContext_GuildData *pFVar5;
  FDS_ViewModelContext_GuildMark *pFVar6;
  bool bVar7;
  EDS_GuildJoinState EVar8;
  UDS_VM_GuildData *pUVar9;
  UDS_VM_GuildMark *pUVar10;
  UObject *pUVar11;
  UDS_GuildData *this_00;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  TSharedPtr<FDS_ViewModelContext_GuildData,1> local_78;
  TSharedPtr<FDS_ViewModelContext_GuildMark,1> local_68;
  TSharedPtr<FDS_ViewModelContext_GuildListSlot,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_GuildListSlot>(&local_58,&local_48);
  if (local_58.Object == (FDS_ViewModelContext_GuildListSlot *)0x0) goto LAB_14be9f8f6;
  if ((local_58.Object == (FDS_ViewModelContext_GuildListSlot *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar9 = (this->VM_GuildData).field0_0x0.DebugPtr;
  this->GuildUID = (local_58.Object)->GuildUID;
  if (pUVar9 == (UDS_VM_GuildData *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_VM_GuildData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_GuildData).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 != (UDS_VM_GuildData *)0x0) goto LAB_14be9f66a;
  }
  else {
LAB_14be9f66a:
    MakeContext<FDS_ViewModelContext_GuildData>(&local_78);
    pFVar5 = local_78.Object;
    if (local_78.Object != (FDS_ViewModelContext_GuildData *)0x0) {
      if ((local_78.Object == (FDS_ViewModelContext_GuildData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar5->_padding_ = 0x211;
      UDS_GuildListData::GetData
                ((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
      bVar7 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar7) {
        (pFVar5->guildData).WeakPtr = local_res18;
      }
      pUVar9 = (this->VM_GuildData).field0_0x0.DebugPtr;
      local_38.Object = (FDS_ViewModelContext *)local_78.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_78.SharedReferenceCount.ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_GuildMark).field0_0x0.DebugPtr == (UDS_VM_GuildMark *)0x0) {
    pUVar10 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMark>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UDS_VM_GuildMark *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->VM_GuildMark).field0_0x0.DebugPtr = pUVar10;
    if (pUVar10 != (UDS_VM_GuildMark *)0x0) goto LAB_14be9f761;
  }
  else {
LAB_14be9f761:
    MakeContext<FDS_ViewModelContext_GuildMark>(&local_68);
    pFVar6 = local_68.Object;
    if (local_68.Object != (FDS_ViewModelContext_GuildMark *)0x0) {
      if ((local_68.Object == (FDS_ViewModelContext_GuildMark *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar6->_padding_ = 0x1f8;
      UDS_GuildListData::GetData
                ((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
      bVar7 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar7) {
        pUVar11 = FWeakObjectPtr::Get(&local_res10);
        pFVar6->GuildMarkTableID = *(int *)&pUVar11[4].field_0x20;
        pUVar11 = FWeakObjectPtr::Get(&local_res10);
        pFVar6->GuildMarkColorTableID = *(int *)&pUVar11[4].field_0x24;
        pUVar11 = FWeakObjectPtr::Get(&local_res10);
        pFVar6->GuildMarkBgTableID = *(int *)(pUVar11 + 5);
        pUVar11 = FWeakObjectPtr::Get(&local_res10);
        pFVar6->GuildMarkBgColorTableID = *(int *)&pUVar11[5].field_0x4;
      }
      pUVar10 = (this->VM_GuildMark).field0_0x0.DebugPtr;
      local_28.Object = (FDS_ViewModelContext *)local_68.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_68.SharedReferenceCount.ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar10,&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  iVar4 = FFieldNotificationClassDescriptor::DisableJoinButton.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::DisableJoinButton.FieldName;
  if (this->DisableJoinButton != false) {
    this->DisableJoinButton = false;
    local_90 = iVar4;
    local_98 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  }
  UDS_GuildListData::GetData
            ((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
  bVar7 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar7) {
    this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(&local_res20);
    EVar8 = UDS_GuildData::GetGuildJoinableState(this_00);
    this->SlotStateWidgetIndex = (uint)EVar8;
  }
  local_80 = FFieldNotificationClassDescriptor::SlotStateWidgetIndex.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::SlotStateWidgetIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
LAB_14be9f8f6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDisableJoinButton @ 14beae210

void __thiscall UDS_VM_GuildListSlot::SetDisableJoinButton(UDS_VM_GuildListSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableJoinButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableJoinButton.FieldName;
  if (this->DisableJoinButton != param_1) {
    this->DisableJoinButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSlotStateWidgetIndex @ 14beb4750

void __thiscall UDS_VM_GuildListSlot::SetSlotStateWidgetIndex(UDS_VM_GuildListSlot *this)

{
  bool bVar1;
  EDS_GuildJoinState EVar2;
  UDS_GuildData *this_00;
  FWeakObjectPtr local_res8 [4];
  FName local_18;
  int local_10;
  
  UDS_GuildListData::GetData
            ((ulong64)local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(local_res8);
    EVar2 = UDS_GuildData::GetGuildJoinableState(this_00);
    this->SlotStateWidgetIndex = (uint)EVar2;
  }
  local_10 = FFieldNotificationClassDescriptor::SlotStateWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SlotStateWidgetIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVM_GuildData @ 14beb7700

void __thiscall UDS_VM_GuildListSlot::SetVM_GuildData(UDS_VM_GuildListSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildData *pFVar2;
  bool bVar3;
  UDS_VM_GuildData *pUVar4;
  FWeakObjectPtr local_res8;
  TSharedPtr<FDS_ViewModelContext_GuildData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildData).field0_0x0.DebugPtr == (UDS_VM_GuildData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_GuildData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildData>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x211;
  UDS_GuildListData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    (pFVar2->guildData).WeakPtr = local_res8;
  }
  pUVar4 = (this->VM_GuildData).field0_0x0.DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// SetVM_GuildMark @ 14beb7d30

void __thiscall UDS_VM_GuildListSlot::SetVM_GuildMark(UDS_VM_GuildListSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildMark *pFVar2;
  bool bVar3;
  UDS_VM_GuildMark *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  TSharedPtr<FDS_ViewModelContext_GuildMark,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildMark).field0_0x0.DebugPtr == (UDS_VM_GuildMark *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMark>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_GuildMark *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildMark).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildMark *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildMark>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildMark *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildMark *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x1f8;
  UDS_GuildListData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkTableID = *(int *)&pUVar5[4].field_0x20;
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkColorTableID = *(int *)&pUVar5[4].field_0x24;
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkBgTableID = *(int *)(pUVar5 + 5);
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkBgColorTableID = *(int *)&pUVar5[5].field_0x4;
  }
  pUVar4 = (this->VM_GuildMark).field0_0x0.DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bebbfd0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildListSlot::UnbindModel(UDS_VM_GuildListSlot *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

